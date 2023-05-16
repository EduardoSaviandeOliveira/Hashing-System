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
}

Book::Book(std::string title, int author, int publisher, std::string genre) {
    id = nextID++;
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->genre = genre;
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

void Book::setIsAvailable(bool isAvailable) {
    this->isAvailable = isAvailable;
}

bool Book::getIsAvailable() {
    return isAvailable;
}

void Book::setDateOfBorrow(std::string dateOfBorrow) {
    this->dateOfBorrow = dateOfBorrow;
}

std::string Book::getDateOfBorrow() {
    return dateOfBorrow;
}

#endif