#include <iostream>
#include "other/DLL.h"

std::oth::DLL<int> vojska(std::oth::DLL<int> list, int a, int b, int c, int d) {
    std::oth::DLLNode<int>* start1 = list.find(a), * start2 = list.find(c), * end1 = list.find(b), * end2 = list.find(d);
    std::oth::DLLNode<int>* prev1 = start1->prev, * prev2 = start2->prev, * next1 = end1->succ, * next2 = end2->succ;

    prev1 == nullptr ? (list.head = start2) : (prev1->succ = start2);
    next2 == nullptr ? (list.tail = end1) : (next2->prev = end1);
    end1->succ = next2; start2->prev = prev1; next1->prev = end2; end2->succ = next1 == start2 ? start1 : next1;
    end1 != prev2 ? (start1->prev = prev2, prev2->succ = start1) : (start1->prev = end2);

    return list;
}

int main()
{
    //initialization syntax for list: std::oth::DLL<typename> name_of_list; | accepts all types, acces a list' element with '.'
    //initialization syntax for node: std::oth::DLLNode<typename>* name_of_node | accepts all types, access a nodes' element with '->'

    /**
    operator <<  | friend std::ostream &operator << (std::ostream &input, DLL<TYPE> list); | prints every element in list
    push_back()  | set the a new value to the tail of the list (append a node at the end of a list)
    push_front() | set the a new value to the head of the list (append a node at the begging of a list)
    push_after() | push_after(TYPE obj, TYPE after), create a new node with a certain value after a give value
    pop_back()   | removes the last node of the list
    pop_front()  | removes the first node of the list
    remove()     | remove(TYPE obj), remove a node with a specific value
    size()       | returns the current size of the list
    print()      | prints all non-empty elements of the list
    find()       | find(TYPE obj), finds and returns a node with a specific value
    sort()       | sort(bool mode), 0 to sort the list in a ascending order, 1 to sort in a descending order
    merge()      | merge(DLL<TYPE> list), merges two lists
    */

    std::cout << "A demonstration of doubly linked lists: " << std::endl << std::endl
    << "Excercise: Swap the places of two sub-groups in a given list, example: " << std::endl
    << "list: [1 2 3 4 5 6]" << std::endl << "do: [1(S1) 2 3(E1)] <-> [4(S2) 5 6(E2)] " << std::endl
    << "result: [4 5 6 1 2 3]" << std::endl << std::endl;

    std::oth::DLL<int> list; int n; std::cout << "Enter size of list: "; std::cin >> n;
    for (int i = 0; i < n; i++) { int value; std::cout << "Enter element [" << i+1<<"]: "; std::cin >> value; list.push_front(value); }

    int start1{ 0 }, end1{ 0 }, start2{ 0 }, end2{ 0 };
    std::cout << "(S1) Enter the starting element of the first sub-list to swap: "; std::cin >> start1;
    std::cout << "(E1) Enter the ending element of the first sub-list to swap: "; std::cin >> end1;
    std::cout << "(S2) Enter the starting element of the second sub-list to swap: "; std::cin >> start2;
    std::cout << "(E2) Enter the ending element of the second sub-list to swap: "; std::cin >> end2;

    std::oth::DLL<int> result = vojska(list, start1, end1, start2, end2); std::cout << result; return 0;
}

