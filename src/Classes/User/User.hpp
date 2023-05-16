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

    public:
        User();
        User(std::string name);

        int getID();
        std::string getName();
        LinkedList<int> getBorrowedBooks();

        void borrowBook(int bookID);
        void returnBook(int bookID);
};

#endif