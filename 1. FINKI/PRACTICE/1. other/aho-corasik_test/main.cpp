#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <windows.h>
using namespace std;

struct Trie{
    class Trie *children[26];
    bool isWord;
};

struct Trie *getNode(void){
    struct Trie *tempNode = new Trie;
    tempNode->isWord = false;
    for (int i=0; i<26; i++) {
        tempNode->children[i] = NULL; }

    return tempNode;
}

void insert(struct Trie *root, string word)
{
    struct Trie *Node = root;
    int size_of_word = word.size();

    for (int i=0; i<size_of_word; i++) {
        int k=word[i] - 'a';
        if(!Node->children[k]) { Node -> children[k] = getNode(); }
    Node = Node -> children[k]; }

    Node->isWord = true;
}

bool search(struct Trie *root, string word)
{
    struct Trie *Node = root;
    int size_of_word = word.size();

    for (int i=0; i<size_of_word; i++) {
        int k=word[i] - 'a';
        if(Node->children[k] == NULL){ return false; }
        else Node = Node->children[k];
    }

    return (Node != NULL && Node->isWord);
}

int main()
{
    return 0;
}
