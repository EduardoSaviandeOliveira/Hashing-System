#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "../../Utils/HashTable/HashTable.hpp"

#include "../Book/Book.hpp"

class Library {
    private:
        HashTable<int, Book> *books;
    public:
        Library();
        ~Library();

        void addBook(Book* book);
        void removeBook(int id);
        //print book
        void printBook(int id);
};

#endif