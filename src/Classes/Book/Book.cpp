#ifndef BOOK_CPP
#define BOOK_CPP

#include "Book.hpp"

int Book::nextID = 0;

Book::Book() {
    id = nextID++;
    std::string title = "";
    author = 0;
    publisher = 0;
    genre = "";
    isBorrow = false;
    dateOfBorrow = "";
}

Book::Book(std::string title, int author, int publisher, std::string genre, bool isBorrow, std::string dateOfBorrow) {
    id = nextID++;
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->genre = genre;
    this->isBorrow = isBorrow;
    this->dateOfBorrow = dateOfBorrow;
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

std::string Book::getGenre() {
    return genre;
}

void Book::setIsBorrow(bool isAvailable) {
    this->isBorrow = isAvailable;
}

bool Book::getIsBorrow() {
    return isBorrow;
}

void Book::setDateOfBorrow(std::string dateOfBorrow) {
    this->dateOfBorrow = dateOfBorrow;
}

std::string Book::getDateOfBorrow() {
    return dateOfBorrow;
}

#endif