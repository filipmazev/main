#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <UrlMon.h>
#include <tchar.h>
#include <filesystem>
#include "other/arr.h"
#include "other/aho-corasick.h"

namespace fs = std::filesystem;

#pragma comment(lib, "urlmon.lib")

constexpr auto CHAR_TYPES = 4;

enum char_types { upper, lower, numeric, special };

void color(int c) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); }

inline int* diversity_score(std::string password) noexcept
{
    bool check_UPPER = false, check_LOWER = false, check_SPECIAL = false, check_NUMERIC = false;
    int* arr = new int[CHAR_TYPES + 1]; for (unsigned int i = 0; i < CHAR_TYPES; i++) { arr[i] = 0; } int cnt_UPPER = 0, cnt_LOWER = 0, cnt_SPECIAL = 0, cnt_NUMERIC = 0;

    for (unsigned int i = 0; i < password.size(); i++) {
        if (isalpha(password[i]) && isupper(password[i])) { arr[upper] = ++cnt_UPPER; check_UPPER = true; }
        if (isalpha(password[i]) && islower(password[i])) { arr[lower] = ++cnt_LOWER; check_LOWER = true; }
        if (isalnum(password[i]) && !isalpha(password[i])) { arr[numeric] = ++cnt_NUMERIC; check_NUMERIC = true; }
        if (ispunct(password[i])) { arr[special] = ++cnt_SPECIAL; check_SPECIAL = true; }
    }

    arr[CHAR_TYPES] = check_UPPER + check_LOWER + check_NUMERIC + check_SPECIAL; return arr;
}

int main()
{
    std::ifstream checker("C:\\ProgramData\\Password Tester\\list.txt");
    
    if (!checker.is_open()) {
        fs::create_directory("C:\\ProgramData\\Password Tester");
        URLDownloadToFile(NULL, _T("https://raw.githubusercontent.com/danielmiessler/SecLists/master/Passwords/Common-Credentials/10-million-password-list-top-10000.txt"), _T("C:\\ProgramData\\Password Tester\\list.txt"), 0, NULL);
    } 

    std::ifstream file("C:\\ProgramData\\Password Tester\\list.txt"); double low_score_limit = 0.5, mid_score_limit = 1, high_score_limit = 5;

    std::string str; int i = 0;
    std::oth::Trie t(SIZE); while (std::getline(file, str)) { t.add(str, i); i++; } t.build_automation();

    std::string password; std::cout << "Enter your password: "; std::cin >> password;

    bool val_easy = t.easy_test(password), val_hard = t.hard_test(password);

    std::oth::arr<char> password_arr; std::oth::arr<char> password_unique;
    for (unsigned int i = 0; i < password.size(); i++) { password_arr.push_back(password[i]); } password_unique = password_arr.unique();

    int* diversity = diversity_score(password); double d_score = diversity[CHAR_TYPES];
    double score = ((double)password_unique.size() / password_arr.size());  score += (((diversity[upper] + diversity[lower] + diversity[numeric] + diversity[special]) * password_unique.size()) * 0.01);
    val_easy == true ? score *= password.size() * 0.01 : (val_hard == true ? score *= password.size(), score *= 0.05 : score *= password.size());

    std::cout << "your password contains " << password_unique.size() << " unique character(s) out of " << password.size() << " total, with " << d_score << " type(s) of characters: " << std::endl;
    std::cout << diversity[upper] << " uppercase characters | " << diversity[lower] << " lowercase characters | " << diversity[numeric] << " numeric characters | " << diversity[special] << " special characters " << std::endl;
    std::cout << "it also has " << (val_easy == true ? 1 : val_hard == true ? 1 : 0) << " warning(s): ";
    if (val_easy == true) { std::cout << "your password has been found in our common passwords list" << std::endl; }
    else if (val_hard == true) { std::cout << "part of your password has been found in our common passwords list" << std::endl; }
    else { std::cout << std::endl; }
    if (score < low_score_limit) { color(12); std::cout << "weak password " << std::endl; }
    if (score >= low_score_limit && score <= mid_score_limit) { color(14); std::cout << "good password " << std::endl; }
    if (score > mid_score_limit && score <= high_score_limit) { color(2); std::cout << "strong password " << std::endl; }
    if (score > high_score_limit) { color(2); std::cout << "excellent password " << std::endl; } color(7);

    system("PAUSE"); return 0;
}
