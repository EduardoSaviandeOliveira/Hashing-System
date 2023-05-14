#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include "../Item/Item.hpp"

#include "../../LinkedList/LinkedList.hpp"

struct Publisher: public Item {
    Publisher(std::string name);
};

#endif