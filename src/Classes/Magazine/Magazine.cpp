#ifndef MAGAZINE_CPP
#define MAGAZINE_CPP

#include "Magazine.hpp"

int Magazine::nextID = 0;

Magazine::Magazine() {
    if (nextID == 100000) {
        throw "Error: nextID is 100000";
    }
    this->id = nextID++;
    std::string title = "";
    this->author = 0;
    this->publisher = 0;
    this->genre = "";
    this->isBorrow = false;
    this->dateOfBorrow = "";
}

Magazine::Magazine(std::string title, int author, int publisher, std::string genre) {
    if (nextID == 100000) {
        throw "Error: nextID is 100000";
    }
    this->id = nextID++;
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->genre = genre;
    this->isBorrow = false;
    this->dateOfBorrow = "";
}

Magazine::~Magazine() {
    nextID--;
}

int Magazine::getID() {
    return id;
}

std::string Magazine::getTitle() {
    return title;
}

int Magazine::getAuthor() {
    return author;
}

int Magazine::getPublisher() {
    return publisher;
}

std::string Magazine::getGenre() {
    return genre;
}

void Magazine::setTitle(std::string title) {
    this->title = title;
}

void Magazine::setIsBorrow(bool isAvailable) {
    this->isBorrow = isAvailable;
}

bool Magazine::getIsBorrow() {
    return isBorrow;
}

void Magazine::setDateOfBorrow(std::string dateOfBorrow) {
    this->dateOfBorrow = dateOfBorrow;
}

std::string Magazine::getDateOfBorrow() {
    return dateOfBorrow;
}

void Magazine::setBorrowedBy(int borrowBy) {
    this->borrowedBy = borrowBy;
}

int Magazine::getBorrowedBy() {
    return borrowedBy;
}

#endif
