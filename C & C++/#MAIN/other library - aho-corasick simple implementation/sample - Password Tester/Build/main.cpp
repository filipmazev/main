#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <Windows.h>
#include "other/arr.h"
#include "other/aho-corasick.h"

void color(int c) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); }

inline double diversity_score(std::string password) noexcept
{
    bool check_UPPER = false, check_LOWER = false, check_SPECIAL = false, check_NUMERIC = false;

    for (unsigned int i = 0; i < password.size(); i++) {
        if (check_UPPER == false) { if (isalpha(password[i]) && isupper(password[i])) { check_UPPER = true; } }
        if (check_LOWER == false) { if (isalpha(password[i]) && islower(password[i])) { check_LOWER = true; } }
        if (check_NUMERIC == false) { if (isalnum(password[i]) && !isalpha(password[i])) { check_NUMERIC = true; } }
        if (check_SPECIAL == false) { if (ispunct(password[i])) { check_SPECIAL = true; } }
    }

    return (check_UPPER + check_LOWER + check_SPECIAL + check_NUMERIC) * 0.1;
}

int main()
{
    double low_score_limit = 0.5, mid_score_limit = 1, high_score_limit = 5;

    std::ifstream file("list.txt"); std::string str; int i = 0;
    std::oth::Trie t(SIZE); while (std::getline(file, str)) { t.add(str, i); i++; } t.build_automation();

    std::string password; std::cin>>password;

    bool val_easy = t.easy_test(password), val_hard = t.hard_test(password);

    std::oth::arr<char> password_arr; std::oth::arr<char> password_unique;
    for (unsigned int i = 0; i < password.size(); i++) { password_arr.push_back(password[i]); } password_unique = password_arr.unique();

    double score = ((double)password_unique.size() / password_arr.size()); val_easy == true ? score *= password.size() * 0.01 : (val_hard == true ? score *= password.size() * 0.05 : score *= password.size()); score += diversity_score(password);

    std::cout << "your password contains " << password_unique.size() << " unique character(s) out of " << password.size() << " total, with " << diversity_score(password) * 10 << " type(s) of characters and " << (val_easy == true ? 1 : val_hard == true ? 1 : 0) << " warning(s)";
    if (val_easy == true) { std::cout << ": "<<std::endl<<"warning: your password has been found in our common passwords list" << std::endl; }
    else if (val_hard == true) { std::cout << ": " << std::endl << "warning: part of your password has been found in our common passwords list" << std::endl; } else { std::cout << std::endl; }

    if (score < low_score_limit) { color(12); std::cout << "weak password " << std::endl; }
    if (score >= low_score_limit && score <= mid_score_limit) { color(14); std::cout << "good password " << std::endl; }
    if (score > mid_score_limit && score <= high_score_limit) { color(2); std::cout << "strong password " << std::endl; }
    if (score > high_score_limit) { color(2); std::cout << "excellent password " << std::endl; } color(7);

    system("PAUSE"); return 0;
}
