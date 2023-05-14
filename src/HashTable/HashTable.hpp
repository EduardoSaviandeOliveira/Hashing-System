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
    void print();
};

struct HashTableLinkedList {
    int size;
    HashTableLinkedListNode* head;
    HashTableLinkedListNode* tail;

    HashTableLinkedList();
    void print();
    void insert(Item* item);
    void remove(Item* item);
};

struct HashTableNode {
    HashTableLinkedList* list;

    HashTableNode();
    void print();
};

struct HashTable {
    HashTableNode* table[HASHMAX];

    HashTable();
    void print();
    void print(int index);
    void insert(Item* item);
    void remove(Item* item);
};

#endif