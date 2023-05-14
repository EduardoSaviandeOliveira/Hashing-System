#ifndef ITEM_CPP
#define ITEM_CPP

#include <iostream>

#include "Item.hpp"

int Item::nextId = 0;

Item::Item(std::string name) {
    this->id = Item::nextId++;
    this->name = name;
}

#endif