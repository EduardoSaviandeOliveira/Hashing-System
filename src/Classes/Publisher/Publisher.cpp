#ifndef PUBLISHER_CPP
#define PUBLISHER_CPP


#include "Publisher.hpp"

int Publisher::nextId = 0;

Publisher::Publisher() {
    this->id = Publisher::nextId++;
    this->name = "";
}

Publisher::Publisher(std::string name) {
    this->id = Publisher::nextId++;
    this->name = name;
}

int Publisher::getId() {
    return this->id;
}

std::string Publisher::getName() {
    return name;
}

LinkedList<int>* Publisher::getBooks() {
    return books;
}

void Publisher::addBook(int id) {
    this->books->insert(id);
}

void Publisher::removeBook(int id) {
    this->books->remove(id);
}

#endif