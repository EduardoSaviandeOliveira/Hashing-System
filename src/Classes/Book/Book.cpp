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

Book::Book(std::string title, int author, int publisher, std::string genre, std::string dateOfBorrow) {
    id = nextID++;
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->genre = genre;
    this->isBorrow = false;
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

bool Book::getIsBorrow() {
    return isBorrow;
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