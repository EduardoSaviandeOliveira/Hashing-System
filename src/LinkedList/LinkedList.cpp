#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "LinkedList.hpp"

LinkedListNode::LinkedListNode() {
    this->item = nullptr;
    this->next = nullptr;
    this->prev = nullptr;
}

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

void LinkedList::insert(Item* item) {
    LinkedListNode* newNode = new LinkedListNode();
    newNode->item = item;

    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        this->tail->next = newNode;
        newNode->prev = this->tail;
        this->tail = newNode;
    }

    this->size++;
}

void LinkedList::remove(Item* item) {
    LinkedListNode* node = this->head;

    while (node != nullptr) {
        if (node->item->id == item->id) {
            if (node->prev == nullptr) {
                this->head = node->next;
            } else {
                node->prev->next = node->next;
            }

            if (node->next == nullptr) {
                this->tail = node->prev;
            } else {
                node->next->prev = node->prev;
            }

            this->size--;
            break;
        }

        node = node->next;
    }
}

void LinkedList::print() {
    LinkedListNode* node = this->head;

    while (node != nullptr) {
        std::cout << node->item->id << " " << node->item->name << std::endl;
        node = node->next;
    }
}

#endif