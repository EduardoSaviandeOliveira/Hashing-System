#ifndef USER_HPP
#define USER_HPP

#include "../Item/Item.hpp"
#include "../../LinkedList/LinkedList.hpp"


class User: public Item {
public:
    User(std::string name);
    void print() const override;
};

#endif