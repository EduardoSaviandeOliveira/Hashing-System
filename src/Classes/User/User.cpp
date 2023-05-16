#ifndef USER_CPP
#define USER_CPP

#include "User.hpp"

User::User() {
    name = "";
}

User::User(std::string name) {
    this->name = name;
}

std::string User::getName() {
    return name;
}

LinkedList<int> User::getBorrowedBooks() {
    return borrowedBooks;
}

void User::borrowBook(int bookID) {
    borrowedBooks.insert(bookID);
}

void User::returnBook(int bookID) {
    borrowedBooks.remove(bookID);
}

#endif