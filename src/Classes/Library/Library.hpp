#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "../../Utils/HashTable/HashTable.hpp"

#include "../Book/Book.hpp"
#include "../Author/Author.hpp"

class Library {
    private:
        HashTable<int, Book> *books;
        HashTable<int, Author> *authors;

    public:
        Library();
        ~Library();

        void addBook(Book* book);
        void removeBook(int id);
        void printBook(int id);

        void addAuthor(Author* author);
        void removeAuthor(int id);
        void printAuthor(int id);
};

#endif