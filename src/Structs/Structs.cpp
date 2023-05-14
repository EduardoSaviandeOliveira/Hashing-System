#ifndef STRUCTS_CPP
#define STRUCTS_CPP

#include "Structs.hpp"

int Item::nextID = 0;

Item::Item() {
    this->ID = Item::nextID++;
    this->name = "";
}

Item::Item(std::string name) {
    this->ID = Item::nextID++;
    this->name = name;
}

#endif