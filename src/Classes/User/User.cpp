#ifndef USER_CPP
#define USER_CPP

#include "User.hpp"

int User::nextID = 0;

User::User() {
    this->id = nextID++;
    name = "";
    this->borrowedBooks = LinkedList<int>();
    this->borrowedMagazines = LinkedList<int>();
    this->borrowedBooksHistory = LinkedList<int>();
    this->borrowedMagazinesHistory = LinkedList<int>();
}

User::User(std::string name) {
    this->id = nextID++;
    this->name = name;
    this->borrowedBooks = LinkedList<int>();
    this->borrowedMagazines = LinkedList<int>();
    this->borrowedBooksHistory = LinkedList<int>();
    this->borrowedMagazinesHistory = LinkedList<int>();
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

LinkedList<int> User::getBorrowedMagazines() {
    return borrowedMagazines;
}

LinkedList<int> User::getBorrowedBooksHistory() {
    return borrowedBooksHistory;
}

LinkedList<int> User::getBorrowedMagazinesHistory() {
    return borrowedMagazinesHistory;
}

void User::borrowBook(int bookID) {
    borrowedBooks.insert(bookID);
}

void User::returnBook(int bookID) {
    borrowedBooks.remove(bookID);
}

void User::borrowMagazine(int magazineID) {
    borrowedMagazines.insert(magazineID);
}

void User::returnMagazine(int magazineID) {
    borrowedMagazines.remove(magazineID);
}

#endif