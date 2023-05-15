#ifndef LIBRARY_CPP
#define LIBRARY_CPP

#include "Library.hpp"

Library::Library() {
    books = new HashTable<int, Book>();
}

Library::~Library() {
    delete books;
}

void Library::addBook(Book* book) {
    int id = std::stoi(book->getID());  // Convert string ID to integer
    books->insert(id, *book);
}

void Library::removeBook(int id) {
    books->remove(id);
}

void Library::printBook(int id) {
    books->get(id)->print();
}





#endif