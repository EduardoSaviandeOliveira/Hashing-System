#ifndef STRUCTS_HPP
#define STRUCTS_HPP

#include <iostream>
#include <string>

struct Item {
    int ID;
    std::string name;
    static int nextID;

    Item();
    Item(std::string name);
};

struct Library: public Item {
};

struct User: public Item {
};

struct Author: public Item {
};

struct Publisher: public Item {
};

struct Book: public Item {
};

struct Magazine: public Item {
};

#endif