#ifndef USER_HPP
#define USER_HPP

#include "../../Utils/LinkedList/LinkedList.hpp"

#include <iostream>
#include <string>

class User {
    private:
    static int nextID;
    int id;
    std::string name;
    LinkedList<int> borrowedBooks;
    LinkedList<int> borrowedMagazines;
    LinkedList<int> borrowedBooksHistory;
    LinkedList<int> borrowedMagazinesHistory;

    public:
        User();
        User(std::string name);
        ~User();

        int getID();
        std::string getName();
        LinkedList<int> getBorrowedBooks();
        LinkedList<int> getBorrowedMagazines();
        LinkedList<int> getBorrowedBooksHistory();
        LinkedList<int> getBorrowedMagazinesHistory();

        void borrowBook(int bookID);
        void returnBook(int bookID);
        void borrowMagazine(int magazineID);
        void returnMagazine(int magazineID);
};

#endif