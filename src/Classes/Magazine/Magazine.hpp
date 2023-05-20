#ifndef MAGAZINE_HPP
#define MAGAZINE_HPP

#include <iostream>
#include <string>

class Magazine {
private:
    static int nextID;
    int id;
    std::string title;
    int author;
    int publisher;
    std::string genre;
    bool isBorrow;
    std::string dateOfBorrow;
    int borrowedBy;
public:
    Magazine();
    Magazine(std::string title, int author, int publisher, std::string genre);

    int getID();
    std::string getTitle();
    int getAuthor();
    int getPublisher();
    std::string getGenre();

    void setIsBorrow(bool isBorrow);
    bool getIsBorrow();
    void setDateOfBorrow(std::string dateOfBorrow);
    std::string getDateOfBorrow();
    void setBorrowedBy(int borrowBy);
    int getBorrowedBy();
};

#endif
