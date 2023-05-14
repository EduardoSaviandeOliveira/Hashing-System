#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>
#include "../Classes/Item/Item.hpp"

class LinkedListNode {
    public:
        Item* item;
        LinkedListNode* next;
        LinkedListNode* prev;

        LinkedListNode();
};

class LinkedList {
    public:
        LinkedListNode* head;
        LinkedListNode* tail;
        int size;

        LinkedList();
        void insert(Item* item);
        void remove(Item* item);
        void print();
};
#endif