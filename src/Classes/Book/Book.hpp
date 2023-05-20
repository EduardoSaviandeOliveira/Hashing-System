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
        int borrowedBy;
        std::string genre;
        bool isBorrow;
        std::string dateOfBorrow;
    public:
        Book();
        Book(std::string title, int author, int publisher, std::string genre, std::string dateOfBorrow);

        int getID();
        std::string getTitle();
        int getAuthor();
        int getPublisher();
        std::string getGenre();
        int getBorrowedBy();

        void setAuthor(int author);
        void setPublisher(int publisher);
        void setGenre(std::string genre);

        void setIsBorrow(bool isAvailable);
        bool getIsBorrow();
        void setDateOfBorrow(std::string dateOfBorrow);
        std::string getDateOfBorrow();
};

#endif