#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item {
public:
    int id;
    std::string name;
    Item(std::string name);

private:
    static int nextId;
};

#endif