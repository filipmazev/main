#include <iostream>
#include "other/DLL.h"

int main()
{
    oth::DLL<int> DLL;
    int node; while ((std::cin >> node), node != -1) { if (node != -1) { DLL.push(node); } }  DLL.sort(0);
    oth::DLLNode<int>* temp = DLL.head; while (temp != nullptr) { if (temp->value % 2 != 0) { std::cout << temp->value << " "; } temp = temp->succ; }
}

