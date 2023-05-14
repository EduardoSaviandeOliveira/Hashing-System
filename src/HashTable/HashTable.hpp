#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include <iostream>

#include "../Book/Book.hpp"

const int LENGTH = 69;

struct HashTableLinkedListNode {
    Book* book;
    HashTableLinkedListNode* next;
    HashTableLinkedListNode* prev;

    HashTableLinkedListNode(Book* book);
    void print();
};

struct HashTableLinkedList {
    int length;
    HashTableLinkedListNode* head;
    HashTableLinkedListNode* tail;

    HashTableLinkedList();
    void print();
};

struct HashTableNode {
    HashTableLinkedList* linkedList;
    HashTableNode* next;
    HashTableNode* prev;

    HashTableNode();
    void print();
};

struct HashTable {
    HashTableNode* head;
    HashTableNode* tail;

    HashTable();
    void insert(Book* book);
    void remove(Book* book);

    void searchID(int ID);
    void searchName(std::string name);
    void searchAuthor(std::string author);
    void searchPublisher(std::string publisher);
    void searchGenre(std::string genre);

    void print();
};

#endif