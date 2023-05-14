#ifndef STRUCTS_HPP
#define STRUCTS_HPP

#include <iostream>
#include <string>

struct Item {
    int ID;
    std::string name;
    std::string type;
    static int nextID;

    Item();
    Item(std::string name, std::string type);
};

struct LinkedListNode {
    LinkedListNode* next;
    LinkedListNode* prev;
    Item* data;

    LinkedListNode(Item* data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

struct LinkedList {
    int length;
    LinkedListNode* head;
    LinkedListNode* tail;

    LinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
        this->length = 0;
    }

    void insert(Item* data) {
        LinkedListNode* node = new LinkedListNode(data);
        if (this->head == nullptr) {
            this->head = node;
            this->tail = node;
        } else {
            this->tail->next = node;
            node->prev = this->tail;
            this->tail = node;
        }
        this->length++;
    }

    void remove(Item* data) {
        LinkedListNode* node = this->head;
        while (node != nullptr) {
            if (node->data == data) {
                if (node->prev != nullptr) {
                    node->prev->next = node->next;
                } else {
                    this->head = node->next;
                }
                if (node->next != nullptr) {
                    node->next->prev = node->prev;
                } else {
                    this->tail = node->prev;
                }
                this->length--;
                delete node;
                return;
            }
            node = node->next;
        }
    }

    void print() {
        LinkedListNode* node = this->head;
        while (node != nullptr) {
            std::cout << node->data->ID << " " << node->data->name << std::endl;
            node = node->next;
        }
    }
};

struct Library: public Item {
};

struct User: public Item {
};

struct Magazine: public Item {
};


struct Book: public Item {
    Book(std::string name, std::string type): Item(name, type) {
    }
    // std::string author;
    // std::string publisher;
    // bool isAvailable;
    // std::string leaseDay;

    // Book(std::string name, std::string author, std::string publisher): Item(name) {
    //     this->author = author;
    //     this->publisher = publisher;
    //     this->isAvailable = true;
    //     this->leaseDay = "";
    // }
};


struct Author: public Item {
    LinkedList books;
    LinkedList magazines;

    Author(std::string name, std::string type): Item(name, type) {
        LinkedList books = LinkedList();
        LinkedList magazines = LinkedList();
    }

    void addBook(Book* book) {
        this->books.insert(book);
    }

    void removeBook(Book* book) {
        this->books.remove(book);
    }

    void print() {
        this->books.print();
    }
};

struct Publisher: public Item {
    LinkedList books;
    LinkedList magazines;

    Publisher(std::string name, std::string type): Item(name, type) {
        LinkedList books = LinkedList();
        LinkedList magazines = LinkedList();
    }

    void addBook(Book* book) {
        this->books.insert(book);
    }

    void removeBook(Book* book) {
        this->books.remove(book);
    }
};

#endif