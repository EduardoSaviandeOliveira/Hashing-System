#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item {
public:
    int id;
    std::string name;
    Item(std::string name);
    virtual void print() const = 0;

private:
    static int nextId;
};

#endif