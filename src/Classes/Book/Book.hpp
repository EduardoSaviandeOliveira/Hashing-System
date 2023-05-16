#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

class Book {
    private:
        static int nextID;
        int id;
        std::string title;
        int author;
        int publisher;
        std::string genre;
    public:
        Book();
        Book(std::string title, int author, int publisher, std::string genre);

        int getID();
        std::string getTitle();
        int getAuthor();
        int getPublisher();
        std::string getGenre();
};

#endif