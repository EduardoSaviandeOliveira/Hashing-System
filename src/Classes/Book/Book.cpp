#ifndef BOOK_CPP
#define BOOK_CPP

#include "Book.hpp"

int Book::nextID = 0;

Book::Book() {
    if (nextID == 100000) {
        throw "Error: nextID is 100000";
    }
    this->id = nextID++;
    this->title = "";
    this->author = 0;
    this->publisher = 0;
    this->genre = "";
    this->borrowedBy = 0;
    this->isBorrow = false;
    this->dateOfBorrow = "";
}

Book::Book(std::string title, int author, int publisher, std::string genre) {
    if (nextID == 100000) {
        throw "Error: nextID is 100000";
    }
    id = nextID++;
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->borrowedBy = 0;
    this->genre = genre;
    this->isBorrow = false;
    this->dateOfBorrow = "0";
}

Book::~Book() {
    nextID--;
}

int Book::getID() {
    return id;
}

std::string Book::getTitle() {
    return title;
}

int Book::getAuthor() {
    return author;
}

int Book::getPublisher() {
    return publisher;
}

void Book::setTitle(std::string title) {
    this->title = title;
}

std::string Book::getGenre() {
    return genre;
}

bool Book::getIsBorrow() {
    return isBorrow;
}

int Book::getBorrowedBy() {
    return borrowedBy;
}

void Book::setAuthor(int author) {
    this->author = author;
}

void Book::setPublisher(int publisher) {
    this->publisher = publisher;
}

void Book::setGenre(std::string genre) {
    this->genre = genre;
}

void Book::setIsBorrow(bool isAvailable) {
    this->isBorrow = isAvailable;
}

void Book::setDateOfBorrow(std::string dateOfBorrow) {
    this->dateOfBorrow = dateOfBorrow;
}

std::string Book::getDateOfBorrow() {
    return dateOfBorrow;
}

#endif
