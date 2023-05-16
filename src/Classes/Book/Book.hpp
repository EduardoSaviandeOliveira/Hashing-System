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
        bool isAvailable;
        std::string dateOfBorrow;
    public:
        Book();
        Book(std::string title, int author, int publisher, std::string genre);

        int getID();
        std::string getTitle();
        int getAuthor();
        int getPublisher();
        std::string getGenre();

        void setIsAvailable(bool isAvailable);
        bool getIsAvailable();
        void setDateOfBorrow(std::string dateOfBorrow);
        std::string getDateOfBorrow();
};

#endif