#ifndef AUTHOR_CPP
#define AUTHOR_CPP

#include "Author.hpp"

int Author::nextId = 0;

Author::Author() {
    if (nextId == 100000) {
        throw "Error: nextID is 100000";
    }
    this->id = Author::nextId++;
    this->name = "";
    this->books = new LinkedList<int>();
    this->magazines = new LinkedList<int>();
}

Author::Author(std::string name) {
    if (nextId == 100000) {
        throw "Error: nextID is 100000";
    }
    this->id = Author::nextId++;
    this->name = name;
    this->books = new LinkedList<int>();
    this->magazines = new LinkedList<int>();
}

Author::~Author() {
    nextId--;
}

int Author::getId() {
    return this->id;
}

std::string Author::getName() {
    return name;
}

void Author::setName(std::string name) {
    this->name = name;
}

LinkedList<int>* Author::getBooks() {
    return books;
}

LinkedList<int>* Author::getMagazines() {
    return magazines;
}

void Author::addBook(int id) {
    this->books->insert(id);
}

void Author::removeBook(int id) {
    this->books->remove(id);
}

void Author::addMagazine(int id) {
    this->magazines->insert(id);
}

void Author::removeMagazine(int id) {
    this->magazines->remove(id);
}

#endif