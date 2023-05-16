#ifndef LIBRARY_CPP
#define LIBRARY_CPP

#include "Library.hpp"

Library::Library() {
    authors = new HashTable<int, Author>();
    publishers = new HashTable<int, Publisher>();
    books = new HashTable<int, Book>();
    magazines = new HashTable<int, Magazine>();
}

Library::~Library() {
    delete authors;
    delete publishers;
    delete books;
    delete magazines;
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

void Library::printAllAuthors() {
    for (int i = 0; i < authors->getSize(); i++) {
        std::cout << "Author ID: " << authors->get(i)->getId() << std::endl;
        std::cout << "Author Name: " << authors->get(i)->getName() << std::endl;
        std::cout << "Author Books: " << std::endl;
        LinkedList<int> *books = authors->get(i)->getBooks();
        for (int i = 0; i < books->getSize(); i++) {
            std::cout << this->books->get(books->get(i))->getTitle() << std::endl;
        }
        std::cout << std::endl;
    }
}

void Library::addPublisher(Publisher* publisher) {
    publishers->insert(publisher->getId(), *publisher);
}

void Library::removePublisher(int id) {
    publishers->remove(id);
}

void Library::printPublisher(int id) {
    std::cout << "Publisher ID: " << publishers->get(id)->getId() << std::endl;
    std::cout << "Publisher Name: " << publishers->get(id)->getName() << std::endl;
    std::cout << "Publisher Books: " << std::endl;
    LinkedList<int> *books = publishers->get(id)->getBooks();
    for (int i = 0; i < books->getSize(); i++) {
        std::cout << this->books->get(books->get(i))->getTitle() << std::endl;
    }
}

void Library::printAllPublishers() {
    for (int i = 0; i < publishers->getSize(); i++) {
        std::cout << "Publisher ID: " << publishers->get(i)->getId() << std::endl;
        std::cout << "Publisher Name: " << publishers->get(i)->getName() << std::endl;
        std::cout << "Publisher Books: " << std::endl;
        LinkedList<int> *books = publishers->get(i)->getBooks();
        for (int i = 0; i < books->getSize(); i++) {
            std::cout << this->books->get(books->get(i))->getTitle() << std::endl;
        }
        std::cout << std::endl;
    }
}

void Library::addBook(Book* book) {
    books->insert(book->getID(), *book);

}

void Library::removeBook(int id) {
    books->remove(id);
}

void Library::printBook(int id) {
    std::cout << "Book ID: " << books->get(id)->getID() << std::endl;
    std::cout << "Book Title: " << books->get(id)->getTitle() << std::endl;// seach for the author id in the hash table and print the name
    std::cout << "Book Author: " << authors->get(books->get(id)->getAuthor())->getName() << std::endl;
    std::cout << "Book Publisher: " << books->get(id)->getPublisher() << std::endl;
    std::cout << "Book Genre: " << books->get(id)->getGenre() << std::endl;
}

void Library::printAllBooks() {
    for (int i = 0; i < books->getSize(); i++) {
        std::cout << "Book ID: " << books->get(i)->getID() << std::endl;
        std::cout << "Book Title: " << books->get(i)->getTitle() << std::endl;
        std::cout << "Book Author: " << authors->get(books->get(i)->getAuthor())->getName() << std::endl;
        std::cout << "Book Publisher: " << books->get(i)->getPublisher() << std::endl;
        std::cout << "Book Genre: " << books->get(i)->getGenre() << std::endl;
        std::cout << std::endl;
    }
}

void Library::addMagazine(Magazine* magazine) {
    magazines->insert(magazine->getID(), *magazine);
}

void Library::removeMagazine(int id) {
    magazines->remove(id);
}

void Library::printMagazine(int id) {
    std::cout << "Magazine ID: " << magazines->get(id)->getID() << std::endl;
    std::cout << "Magazine Title: " << magazines->get(id)->getTitle() << std::endl;
    std::cout << "Magazine Author: " << authors->get(magazines->get(id)->getAuthor())->getName() << std::endl;
    std::cout << "Magazine Publisher: " << publishers->get(magazines->get(id)->getPublisher())->getName() << std::endl;
    std::cout << "Magazine Genre: " << magazines->get(id)->getGenre() << std::endl;
}

void Library::printAllMagazines() {
    for (int i = 0; i < magazines->getSize(); i++) {
        std::cout << "Magazine ID: " << magazines->get(i)->getID() << std::endl;
        std::cout << "Magazine Title: " << magazines->get(i)->getTitle() << std::endl;
        std::cout << "Magazine Author: " << authors->get(magazines->get(i)->getAuthor())->getName() << std::endl;
        std::cout << "Magazine Publisher: " << publishers->get(magazines->get(i)->getPublisher())->getName() << std::endl;
        std::cout << "Magazine Genre: " << magazines->get(i)->getGenre() << std::endl;
        std::cout << std::endl;
    }
}

#endif