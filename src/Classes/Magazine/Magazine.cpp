#ifndef MAGAZINE_CPP
#define MAGAZINE_CPP

#include "Magazine.hpp"

int Magazine::nextID = 0;

Magazine::Magazine() {
    id = nextID++;
    std::string title = "";
    author = 0;
    publisher = 0;
    genre = "";
    isBorrow = false;
    dateOfBorrow = "";
}

Magazine::Magazine(std::string title, int author, int publisher, std::string genre) {
    id = nextID++;
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->genre = genre;
    this->isBorrow = false;
    this->dateOfBorrow = "";
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

#endif
