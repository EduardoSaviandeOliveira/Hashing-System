#ifndef ITEM_HPP
#define ITEM_HPP

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

#endif