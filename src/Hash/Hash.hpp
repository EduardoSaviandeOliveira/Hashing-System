#ifndef HASH_HPP
#define HASH_HPP

#include <iostream>
#include <string>

struct Autor {
    int id;
    std::string name;
};


struct Publisher {
    int id;
    std::string name;
};

struct Book {
    std::string name;
    int id;
    Autor autor;
    Publisher publisher;
};

struct Magazine {
    int id;
    std::string name;
    Autor autor;
    Publisher publisher;
};

struct User {
    int id;
    std::string name;
};

#endif