#ifndef HASH_CPP
#define HASH_CPP

#include "HashTable.hpp"

HashTableNode::HashTableNode() {
    this->list = new LinkedList();
    this->next = nullptr;
    this->prev = nullptr;
}

HashTable::HashTable() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

int HashTable::hash(Item* item) {
    return item->id % HASHMAX;
}

void HashTable::insert(Item* item) {
    int index = this->hash(item);

    HashTableNode* newNode = new HashTableNode();
    newNode->Index = index;
    newNode->list->insert(item);

    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        HashTableNode* node = this->head;

        while (node != nullptr) {
            if (node->Index == index) {
                node->list->insert(item);
                break;
            }

            node = node->next;
        }

        if (node == nullptr) {
            this->tail->next = newNode;
            newNode->prev = this->tail;
            this->tail = newNode;
        }
    }

    this->size++;
}

void HashTable::remove(Item* item) {
    int index = this->hash(item);

    HashTableNode* node = this->head;

    while (node != nullptr) {
        if (node->Index == index) {
            node->list->remove(item);
            break;
        }

        node = node->next;
    }

    this->size--;
}

void HashTable::print() {
    HashTableNode* node = this->head;

    while (node != nullptr) {
        node->list->print();
        node = node->next;
    }
}

#endif