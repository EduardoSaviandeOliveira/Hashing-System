#ifndef STRUCTS_CPP
#define STRUCTS_CPP

#include "Book.hpp"

int Book::nextID = 0;

Book::Book(std::string name, std::string author, std::string publisher, std::string genre) {
    this->ID = Book::nextID;
    Book::nextID++;
    this->name = name;
    this->author = author;
    this->publisher = publisher;
    this->genre = genre;
}

#endif