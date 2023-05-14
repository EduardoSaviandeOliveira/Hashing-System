#ifndef HASHTABLE_CPP
#define HASHTABLE_CPP

#include "HashTable.hpp"

HashTableLinkedListNode::HashTableLinkedListNode(Item* item) {
    this->item = item;
    this->next = nullptr;
    this->prev = nullptr;
}

HashTableLinkedList::HashTableLinkedList() {
    this->size = 0;
    this->head = nullptr;
    this->tail = nullptr;
}


#endif