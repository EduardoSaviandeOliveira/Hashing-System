#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

class Book {
    private:
        static int nextID;
        std::string id;
        std::string title;
        std::string author;
        std::string publisher;
        std::string genre;
    public:
        Book(std::string title, std::string author, std::string publisher, std::string genre);
        std::string getID();
        std::string getTitle();
        std::string getAuthor();
        std::string getPublisher();
        std::string getGenre();
        void print();

};

#endif