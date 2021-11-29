#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "aho.hpp"

using namespace std;

char to_lowercase(char c) {
    if (c >= 'A' && c <= 'Z') { return c + 32; }
    return c; }

int main()
{
    vector<string> dictionary {"he", "she", "hers", "his"};

    Aho ahotrie {};

    for (auto &s: dictionary)
        ahotrie.add_string(s);

    ahotrie.prepare();

    string text, c; cin>>text;

    for (char &c: text) { c = to_lowercase(c); }

    int matches = ahotrie.process(text);

    cout<<"Total matches: "<<matches<<endl;

    return 0;
}
