#ifndef AUTHOR_HPP
#define AUTHOR_HPP

#include "../Item/Item.hpp"
#include "../Form/Form.hpp"

#include "../../LinkedList/LinkedList.hpp"

class Author: public Item {
public:
    Author(std::string name);
    LinkedList books;
    LinkedList magazines;

    void print() const override;
    void printBooks();
    void printMagazines();

    void addBook(Form* book);
    void addMagazine(Form* magazine);
    void removeBook(Form* book);
    void removeMagazine(Form* magazine);
};

#endif