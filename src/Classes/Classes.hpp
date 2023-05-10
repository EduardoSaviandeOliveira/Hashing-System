#ifndef CLASSES_HPP
#define CLASSES_HPP

#include "../LinkedList/LinkedList.hpp"

#include <string>

class Item {
    public:
        static int id;
        std::string name;
    Item(std::string name) {
        this->id++;
        this->name = name;
    }
};

class Library {
    
};

class User: public Item {
    public:
        // std::vector<Book> books;
        // std::vector<Magazine> magazines;
};

class Autor: public Item {
    public:
        // std::vector<Book> books;
        // std::vector<Magazine> magazines;
};

struct Publisher: public Item {
    // std::vector<Book> books;
    // std::vector<Magazine> magazines;
};

class Form: public Item {
    public:
        Autor autor;
        Publisher publisher;
        std::string gender;
        std::string allocationDate;
        bool isAvailable;

        Form(Autor autor, Publisher publisher, std::string gender, std::string allocationDate, bool isAvailable)
        : Item { name }
        , autor { autor }
        , publisher {publisher}
        , gender { gender }
        , allocationDate { allocationDate}
        , isAvailable { isAvailable }
        {
        }
};

class Book: public Form {
};

class Magazine: public Form {
};

#endif