#ifndef LIBRARY_HPP
#define LIBRARY_HPP


#include "../../Utils/Date/Date.hpp"
#include "../../Utils/HashTable/HashTable.hpp"

#include "../Author/Author.hpp"
#include "../Publisher/Publisher.hpp"
#include "../Book/Book.hpp"
#include "../Magazine/Magazine.hpp"
#include "../User/User.hpp"

class Library {
    private:
        HashTable<int, User> *users;
        HashTable<int, Author> *authors;
        HashTable<int, Publisher> *publishers;
        HashTable<int, Book> *books;
        HashTable<int, Magazine> *magazines;

    public:
        Library();
        ~Library();

        void addAuthor(Author author);
        void removeAuthor(int id);
        void printAuthor(int id);

        void addPublisher(Publisher publisher);
        void removePublisher(int id);
        void printPublisher(int id);

        void addBook(Book book);
        void removeBook(int id);
        void printBook(int id);

        void addMagazine(Magazine magazine);
        void removeMagazine(int id);
        void printMagazine(int id);

        void addUser(User user);
        void removeUser(int id);
        void printUser(int id);
        void borrowBook(int userID, int bookID);
        void returnBook(int userID, int bookID);
        void printBorrowedBooks(int userID);
};

#endif
