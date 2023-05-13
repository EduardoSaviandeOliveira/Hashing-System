#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

namespace lkl {
    template <typename T>
    struct Node {
        T data;
        Node<T>* next;
        Node<T>* prev;
    };

    template <typename T>
    struct LinkedList {
        Node<T>* head;
        Node<T>* tail;
        int size;
    };

    template <typename T>
    LinkedList<T> create();

    template <typename T>
    bool insert(LinkedList<T>& list, T data);
}

#endif