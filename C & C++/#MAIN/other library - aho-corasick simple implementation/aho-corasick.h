///
// Written in 2022 by Filip Mazev (@mazevmazev)
//
// To the extent possible under law, the author(s) have dedicated all
// copyright and related and neighboring rights to this software to the
// public domain worldwide. This software is distributed without any warranty.
//
// CC0 Public Domain Dedication <http://creativecommons.org/publicdomain/zero/1.0/>.
// A minimal implementation of aho-corasick Trie algorithm / oth::arr
///

/** @file other/aho-corasick */

#include <iostream>
#include <vector>
#include <string>

#define SIZE 128

namespace std
{
    namespace oth
    {
    class Vertex
    {
        public:
            std::vector<int> string_ends; std::vector<int> next; std::vector<int> go;
            int parent, link; char parentChar;

            Vertex(){}

            Vertex(int k, int parent = -1, char parentChar = '$') {
                this->string_ends.clear();  this->next.resize(k, -1);
                this->parent = parent; this->parentChar = parentChar;
                this->link = -1; go.resize(k, -1);
            }

            ~Vertex(){}
        };

        class Trie
        {
        public:
            int k; std::vector<Vertex> nodes;

            Trie(){}

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

            ~Trie(){}
        };
    }
}
