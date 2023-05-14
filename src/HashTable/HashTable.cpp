#ifndef HASHTABLE_CPP
#define HASHTABLE_CPP

#include "HashTable.hpp"

HashTableLinkedListNode::HashTableLinkedListNode(Book* book) {
    this->book = book;
    this->next = nullptr;
    this->prev = nullptr;
}

void HashTableLinkedListNode::print() {
    std::cout << "ID: " << this->book->ID << std::endl;
    std::cout << "Name: " << this->book->name << std::endl;
    std::cout << "Author: " << this->book->author << std::endl;
    std::cout << "Publisher: " << this->book->publisher << std::endl;
    std::cout << "Genre: " << this->book->genre << std::endl;
    std::cout << std::endl;
}

HashTableLinkedList::HashTableLinkedList() {
    this->length = 0;
    this->head = nullptr;
    this->tail = nullptr;
}

void HashTableLinkedList::print() {
    HashTableLinkedListNode* node = this->head;
    while (node != nullptr) {
        node->print();
        node = node->next;
    }
}

HashTableNode::HashTableNode() {
    this->linkedList = new HashTableLinkedList();
    this->next = nullptr;
    this->prev = nullptr;
}
void HashTableNode::print() {
    this->linkedList->print();
}

HashTable::HashTable() {
    this->head = nullptr;
    this->tail = nullptr;
}

void HashTable::print() {
    HashTableNode* node = this->head;
    while (node != nullptr) {
        node->print();
        node = node->next;
    }
}

void HashTable::insert(Book* book) {
    int index = book->ID % LENGTH;
    HashTableNode* node = this->head;
    while (node != nullptr) {
        if (node->linkedList->length == 0) {
            node->linkedList->head = new HashTableLinkedListNode(book);
            node->linkedList->tail = node->linkedList->head;
            node->linkedList->length++;
            return;
        }
        if (node->linkedList->head->book->ID == index) {
            HashTableLinkedListNode* newNode = new HashTableLinkedListNode(book);
            newNode->next = node->linkedList->head;
            node->linkedList->head->prev = newNode;
            node->linkedList->head = newNode;
            node->linkedList->length++;
            return;
        }
        node = node->next;
    }
    HashTableNode* newNode = new HashTableNode();
    newNode->linkedList->head = new HashTableLinkedListNode(book);
    newNode->linkedList->tail = newNode->linkedList->head;
    newNode->linkedList->length++;
    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
        return;
    }
    newNode->next = this->head;
    this->head->prev = newNode;
    this->head = newNode;
}

void HashTable::remove(Book* book) {
    int index = book->ID % LENGTH;
    HashTableNode* node = this->head;
    while (node != nullptr) {
        if (node->linkedList->length != 0) {
            if (node->linkedList->head->book->ID == book->ID) {
                HashTableLinkedListNode* temp = node->linkedList->head;
                node->linkedList->head = node->linkedList->head->next;
                if (node->linkedList->head != nullptr) {
                    node->linkedList->head->prev = nullptr;
                }
                delete temp;
                node->linkedList->length--;
                return;
            }
        }
        node = node->next;
    }
}


// print the list of books with the given ID
void HashTable::searchID(int ID) {
    int index = ID % LENGTH;
    HashTableNode* node = this->head;
    while (node != nullptr) {
        if (node->linkedList->length != 0) {
            if (node->linkedList->head->book->ID == ID) {
                node->linkedList->print();
                return;
            }
        }
        node = node->next;
    }
}


void HashTable::searchName(std::string name) {
    HashTableNode* node = this->head;
    while (node != nullptr) {
        HashTableLinkedListNode* linkedListNode = node->linkedList->head;
        while (linkedListNode != nullptr) {
            if (linkedListNode->book->name == name) {
                std::cout << "ID: " << linkedListNode->book->ID << std::endl;
            }
            linkedListNode = linkedListNode->next;
        }
        node = node->next;
    }
}



void HashTable::searchAuthor(std::string author) {
    HashTableNode* node = this->head;
    while (node != nullptr) {
        HashTableLinkedListNode* linkedListNode = node->linkedList->head;
        while (linkedListNode != nullptr) {
            if (linkedListNode->book->author == author) {
                std::cout << "ID: " << linkedListNode->book->ID << std::endl;
            }
            linkedListNode = linkedListNode->next;
        }
        node = node->next;
    }
}

void HashTable::searchPublisher(std::string publisher) {
    HashTableNode* node = this->head;
    while (node != nullptr) {
        HashTableLinkedListNode* linkedListNode = node->linkedList->head;
        while (linkedListNode != nullptr) {
            if (linkedListNode->book->publisher == publisher) {
                std::cout << "ID: " << linkedListNode->book->ID << std::endl;
            }
            linkedListNode = linkedListNode->next;
        }
        node = node->next;
    }
}

void HashTable::searchGenre(std::string genre) {
    HashTableNode* node = this->head;
    while (node != nullptr) {
        HashTableLinkedListNode* linkedListNode = node->linkedList->head;
        while (linkedListNode != nullptr) {
            if (linkedListNode->book->genre == genre) {
                std::cout << "ID: " << linkedListNode->book->ID << std::endl;
            }
            linkedListNode = linkedListNode->next;
        }
        node = node->next;
    }
}


#endif