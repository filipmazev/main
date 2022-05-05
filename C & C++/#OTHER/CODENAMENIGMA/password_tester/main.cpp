#include <iostream>
#include <vector>
#include <other/arr.h>
#include <string>
#include <fstream>
#include <Windows.h>

#define SIZE 128

void color(int c) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); }

class Vertex
{
public:
    std::vector<int> string_ends; std::vector<int> next; std::vector<int> go;
    int parent, link; char parentChar;

    Vertex(int k, int parent = -1, char parentChar = '$') {
        this->string_ends.clear();  this->next.resize(k, -1);
        this->parent = parent; this->parentChar = parentChar;
        this->link = -1; go.resize(k, -1);
    }
};

class Trie
{
public:
    int k; std::vector<Vertex> nodes;

    Trie(int k) { this->k = k; this->nodes.push_back(Vertex(this->k)); }

    inline void add(std::string str, int index) {
        int curr = 0;
        for (auto c : str) {
            if (this->nodes[curr].next[c] == -1) {
                this->nodes[curr].next[c] = nodes.size();
                this->nodes.push_back(Vertex(this->k, curr, c));
            }
            curr = this->nodes[curr].next[c];
        }
        nodes[curr].string_ends.push_back(index);
    }

    inline void build_automation() {
        for (unsigned int i = 0; i < ((int)this->nodes.size()); i++) {
            for (unsigned int j = 0; j < this->k; j++) {
                go(i, j);
            }
        }
    }

    inline int get_link(int v) noexcept {
        if (this->nodes[v].link == -1) {
            if (v == 0 || this->nodes[v].parent == 0) { this->nodes[v].link = 0; }
            else { this->nodes[v].link = go(get_link(this->nodes[v].parent), this->nodes[v].parentChar); }
        }
        return this->nodes[v].link;
    }

    inline int go(int v, char ch) noexcept {
        int c = ch;
        if (this->nodes[v].go[c] == -1) {
            if (this->nodes[v].next[c] != -1) {
                this->nodes[v].go[c] = this->nodes[v].next[c];
            }
            else { this->nodes[v].go[c] = (v == 0) ? 0 : go(get_link(v), ch); }
        }
        return this->nodes[v].go[c];
    }

    inline bool easy_test(std::string str) noexcept { int curr = 0; for (auto c : str) { curr = nodes[curr].go[c]; if (curr == 0) { return false; } } return true; }
    inline bool hard_test(std::string str) noexcept { int curr = 0; for (auto c : str) { curr = nodes[curr].go[c]; } return curr == 0 ? false : true; }
};

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
    Trie t(SIZE); while (std::getline(file, str)) { t.add(str, i); i++; } t.build_automation();

    std::string password; std::fstream read; read.open("C:\\Users\\filip\\Documents\\GitHub\\main\\C & C++\\#OTHER\\CODENAMENIGMA\\main\\save.txt");
    if (read.is_open()) { std::getline(read, password); }

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
