#ifndef AUTHOR_CPP
#define AUTHOR_CPP

#include "Author.hpp"

Author::Author (std::string name): Item(name) {
    this->books = LinkedList();
    this->magazines = LinkedList();
}

void Author::print() const {
    std::cout << this->id << " - " << this->name << std::endl;
}

void Author::printBooks() {
    std::cout << "Books by " << this->name << std::endl;
    this->books.print();
}

void Author::printMagazines() {
    std::cout << "Magazines by " << this->name << std::endl;
    this->magazines.print();
}

void Author::addBook(Form* book) {
    this->books.insert(book);
}

void Author::addMagazine(Form* magazine) {
    this->magazines.insert(magazine);
}

void Author::removeBook(Form* book) {
    this->books.remove(book);
}

void Author::removeMagazine(Form* magazine) {
    this->magazines.remove(magazine);
}


#endif