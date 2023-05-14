#ifndef PUBLISHER_CPP
#define PUBLISHER_CPP

#include "Publisher.hpp"

Publisher::Publisher(std::string name): Item(name) {}

void Publisher::print() const {
    std::cout << this->id << " - " << this->name << std::endl;
}

#endif