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

        void addAuthor(Author author);
        void removeAuthor(int id);
        void printAuthor(int id);

        void addPublisher(Publisher publisher);
        void removePublisher(int id);
        void printPublisher(int id);
        void printPublishers();

        void addBook(Book book);
        void removeBook(int id);
        void printBook(int id);
        void printBooksByName(std::string name);
        void printBooks();

        void addMagazine(Magazine magazine);
        void removeMagazine(int id);
        void printMagazine(int id);
        void printMagazines();
        void printMagazinesByName(std::string name);

        void addUser(User user);
        void removeUser(int id);
        void printUser(int id);
        void printUser(std::string name);
        void printBooksHistory(int id);
        void printMagazinesHistory(int id);

        void borrowBook(int userID, int bookID, std::string date);
        void returnBook(int userID, int bookID);
        void printBorrowedBooks(int userID);

        void borrowMagazine(int userID, int magazineID, std::string date);
        void returnMagazine(int userID, int magazineID);
        void printBorrowedMagazines(int userID);

        void printGenreBooks(std::string genre);
        void printGenreMagazines(std::string genre);
        void printLateBooks();
        void printLateMagazines();
};

#endif
