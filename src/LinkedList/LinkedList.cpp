#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "LinkedList.hpp"

namespace lkl {
    template <typename T>
    lkl::LinkedList<T> create() {
        lkl::LinkedList<T> list;
        list.head = nullptr;
        list.tail = nullptr;
        list.size = 0;
        return list;
    }

    template <typename T>
    bool insert(lkl::LinkedList<T>& list, T data) {
        lkl::Node<T>* newNode = new lkl::Node<T>;
        newNode->data = data;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (list.head == nullptr) {
            list.head = newNode;
            list.tail = newNode;
            list.size++;
            return true;
        }

        lkl::Node<T>* temp = list.head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
        list.tail = newNode;
        list.size++;
        return true;
    }
}
#endif