#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP


namespace LKL {
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
}


#endif