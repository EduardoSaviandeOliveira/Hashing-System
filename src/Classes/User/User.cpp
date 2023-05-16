#ifndef USER_CPP
#define USER_CPP

#include "User.hpp"

int User::nextID = 0;

User::User() {
    this->id = nextID++;
    name = "";
    this->borrowedBooks = LinkedList<int>();
}

User::User(std::string name) {
    this->id = nextID++;
    this->name = name;
    this->borrowedBooks = LinkedList<int>();
}

int User::getID() {
    return id;
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