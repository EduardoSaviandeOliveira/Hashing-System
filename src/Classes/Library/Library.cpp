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
    books->insert(book->getID(), *book);

}

void Library::removeBook(int id) {
    books->remove(id);
}

void Library::printBook(int id) {
    books->get(id)->print();
}

void Library::addAuthor(Author* author) {
    authors->insert(author->getId(), *author);
}


void Library::removeAuthor(int id) {
    authors->remove(id);
}

void Library::printAuthor(int id) {
    authors->get(id)->print();
}

#endif