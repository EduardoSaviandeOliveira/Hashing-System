#ifndef USER_CPP
#define USER_CPP

#include "User.hpp"

User::User(std::string name): Item(name) {}

void User::print() const {
    std::cout << this->id << " - " << this->name << std::endl;
}

#endif