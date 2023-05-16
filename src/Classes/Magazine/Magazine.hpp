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
public:
    Magazine();
    Magazine(std::string title, int author, int publisher, std::string genre);

    int getID();
    std::string getTitle();
    int getAuthor();
    int getPublisher();
    std::string getGenre();
};

#endif
