#ifndef LIBRARY_CPP
#define LIBRARY_CPP

#include "Library.hpp"

Library::Library() {
    books = new HashTable<int, Book>();
    authors = new HashTable<int, Author>();
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

// need to get the author id and print the book with all informatoons
void Library::printBook(int id) {
    std::cout << "Book ID: " << books->get(id)->getID() << std::endl;
    std::cout << "Book Title: " << books->get(id)->getTitle() << std::endl;// seach for the author id in the hash table and print the name
    std::cout << "Book Author: " << authors->get(books->get(id)->getAuthor())->getName() << std::endl;
    std::cout << "Book Publisher: " << books->get(id)->getPublisher() << std::endl;
    std::cout << "Book Genre: " << books->get(id)->getGenre() << std::endl;
}

void Library::addAuthor(Author* author) {
    authors->insert(author->getId(), *author);
}


void Library::removeAuthor(int id) {
    authors->remove(id);
}

void Library::printAuthor(int id) {
    std::cout << "Author ID: " << authors->get(id)->getId() << std::endl;
    std::cout << "Author Name: " << authors->get(id)->getName() << std::endl;
    std::cout << "Author Books: " << std::endl; // print books names
    LinkedList<int> *books = authors->get(id)->getBooks();
    for (int i = 0; i < books->getSize(); i++) {
        std::cout << this->books->get(books->get(i))->getTitle() << std::endl;
    }
}

#endif