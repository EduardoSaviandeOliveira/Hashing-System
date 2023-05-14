#ifndef HASH_HPP
#define HASH_HPP

#include <iostream>

#include "../LinkedList/LinkedList.hpp"
#include "../Classes/Item/Item.hpp"

const int HASHMAX = 69;

// duplamente encadeada
class HashTableNode {
    public:
        int Index;
        LinkedList* list;
        HashTableNode* next;
        HashTableNode* prev;

        HashTableNode();
};

class HashTable {
    public:
        HashTableNode* head;
        HashTableNode* tail;
        int size;

        HashTable();
        int hash(Item* item);
        void insert(Item* item);
        void remove(Item* item);
        void print();
};

#endif