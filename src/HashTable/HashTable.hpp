#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include <iostream>

#include "../Structs/Structs.hpp"

const int HASHMAX = 69;

struct HashTableLinkedListNode {
    Item* item;
    HashTableLinkedListNode* next;
    HashTableLinkedListNode* prev;

    HashTableLinkedListNode(Item* item);
};

struct HashTableLinkedList {
    int size;
    HashTableLinkedListNode* head;
    HashTableLinkedListNode* tail;

    HashTableLinkedList();
};


#endif