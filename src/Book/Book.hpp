#ifndef STRUCTS_HPP
#define STRUCTS_HPP

#include <iostream>
#include <string>

struct Book {
    static int nextID;
    int ID;
    std::string name;
    std::string author;
    std::string publisher;
    std::string genre;

    Book(std::string name, std::string author, std::string publisher, std::string genre);
};

#endif