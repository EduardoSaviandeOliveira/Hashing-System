#ifndef PUBLISHER_CPP
#define PUBLISHER_CPP


#include "Publisher.hpp"

int Publisher::nextId = 0;

Publisher::Publisher() {
    if (nextId == 100000) {
        throw "Error: nextID is 100000";
    }

    this->id = Publisher::nextId++;
    this->name = "";
    this->books = new LinkedList<int>();
    this->magazines = new LinkedList<int>();
}

Publisher::Publisher(std::string name) {
    if (nextId == 100000) {
        throw "Error: nextID is 100000";
    }
    this->id = Publisher::nextId++;
    this->name = name;
    this->books = new LinkedList<int>();
    this->magazines = new LinkedList<int>();
}

Publisher::~Publisher() {
    nextId--;
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

void Publisher::setName(std::string name) {
    this->name = name;
}

void Publisher::addBook(int id) {
    books->insert(id);
}

void Publisher::removeBook(int id) {
    books->remove(id);
}

void Publisher::addMagazine(int id) {
    magazines->insert(id);
}

void Publisher::removeMagazine(int id) {
    magazines->remove(id);
}


#endif