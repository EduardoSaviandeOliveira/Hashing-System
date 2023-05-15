#ifndef BOOK_CPP
#define BOOK_CPP

#include "Book.hpp"

int Book::nextID = 0;

Book::Book() {
    this->id = std::to_string(nextID);
    this->title = "";
    this->author = "";
    this->publisher = "";
    this->genre = "";
    nextID++;
}

Book::Book(std::string title, std::string author, std::string publisher, std::string genre) {
    this->id = std::to_string(nextID);
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->genre = genre;
    nextID++;
}

std::string Book::getID() {
    return id;
}

std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

std::string Book::getPublisher() {
    return publisher;
}

std::string Book::getGenre() {
    return genre;
}

void Book::print() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Publisher: " << publisher << std::endl;
    std::cout << "Genre: " << genre << std::endl;
}

#endif