#ifndef AUTHOR_CPP
#define AUTHOR_CPP

#include "Author.hpp"

int Author::nextId = 0;

Author::Author() {
    this->id = Author::nextId++;
    this->name = "";
    this->books = new LinkedList<int>();
}

Author::Author(std::string name) {
    this->id = Author::nextId++;
    this->name = name;
    this->books = new LinkedList<int>();
}

int Author::getId() {
    return this->id;
}

std::string Author::getName() {
    return name;
}

LinkedList<int>* Author::getBooks() {
    return books;
}

void Author::addBook(int id) {
    this->books->insert(id);
}

void Author::removeBook(int id) {
    this->books->remove(id);
}

#endif