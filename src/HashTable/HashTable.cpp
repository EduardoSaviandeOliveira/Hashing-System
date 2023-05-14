#ifndef HASHTABLE_CPP
#define HASHTABLE_CPP

#include "HashTable.hpp"

HashTableLinkedListNode::HashTableLinkedListNode(Item* item) {
    this->item = item;
    this->next = nullptr;
    this->prev = nullptr;
}

void HashTableLinkedListNode::print() {
    std::cout << this->item->ID << " " << this->item->name << std::endl;
}

HashTableLinkedList::HashTableLinkedList() {
    this->size = 0;
    this->head = nullptr;
    this->tail = nullptr;
}

void HashTableLinkedList::print() {
    HashTableLinkedListNode* current = this->head;
    while (current != nullptr) {
        current->print();
        current = current->next;
    }
}

void HashTableLinkedList::insert(Item* item) {
    HashTableLinkedListNode* node = new HashTableLinkedListNode(item);
    if (this->head == nullptr) {
        this->head = node;
        this->tail = node;
    } else {
        this->tail->next = node;
        node->prev = this->tail;
        this->tail = node;
    }
    this->size++;
}

void HashTableLinkedList::remove(Item* item) {
    HashTableLinkedListNode* current = this->head;
    while (current != nullptr) {
        if (current->item == item) {
            if (current->prev == nullptr) {
                this->head = current->next;
            } else {
                current->prev->next = current->next;
            }
            if (current->next == nullptr) {
                this->tail = current->prev;
            } else {
                current->next->prev = current->prev;
            }
            this->size--;
            break;
        }
        current = current->next;
    }
}

HashTableNode::HashTableNode() {
    this->list = new HashTableLinkedList();
}

void HashTableNode::print() {
    this->list->print();
}

HashTable::HashTable() {
    for (int i = 0; i < HASHMAX; i++) {
        this->table[i] = new HashTableNode();
    }
}

void HashTable::print() {
    for (int i = 0; i < HASHMAX; i++) {
        std::cout << i << ": ";
        this->table[i]->print();
        std::cout << std::endl;
    }
}

void HashTable::print(int index) {
    this->table[index]->print();
}

void HashTable::insert(Item* item) {
    int index = item->ID % HASHMAX;
    this->table[index]->list->insert(item);
}

void HashTable::remove(Item* item) {
    int index = item->ID % HASHMAX;
    this->table[index]->list->remove(item);
}


#endif