#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

class Book {
    private:
        static int nextID;
        int id;
        std::string title;
        std::string author;
        std::string publisher;
        std::string genre;
    public:
        Book();
        Book(std::string title, std::string author, std::string publisher, std::string genre);

        int getID();
        std::string getTitle();
        std::string getAuthor();
        std::string getPublisher();
        std::string getGenre();

        void print();
};

#endif