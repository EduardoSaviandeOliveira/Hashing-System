#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "../../Utils/HashTable/HashTable.hpp"

#include "../Author/Author.hpp"
#include "../Publisher/Publisher.hpp"
#include "../Book/Book.hpp"
#include "../Magazine/Magazine.hpp"

class Library {
    private:
        HashTable<int, Book> *books;
        HashTable<int, Author> *authors;
        HashTable<int, Publisher> *publishers;
        HashTable<int, Magazine> *magazines;

    public:
        Library();
        ~Library();

        void addAuthor(Author* author);
        void removeAuthor(int id);
        void printAuthor(int id);
        void printAllAuthors();

        void addPublisher(Publisher* publisher);
        void removePublisher(int id);
        void printPublisher(int id);
        void printAllPublishers();

        void addBook(Book* book);
        void removeBook(int id);
        void printBook(int id);
        void printAllBooks();

        void addMagazine(Magazine* magazine);
        void removeMagazine(int id);
        void printMagazine(int id);
        void printAllMagazines();
};

#endif
