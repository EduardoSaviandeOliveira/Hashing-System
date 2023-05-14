#ifndef FORM_HPP
#define FORM_HPP

#include "../Item/Item.hpp"
#include "../Publisher/Publisher.hpp"

class Form: public Item {
public:
    Publisher* publisher;
    std::string gender;
    std::string allocationDate;
    bool isAvailable;

    Form(std::string name, Publisher* publisher, std::string gender, std::string allocationDate, bool isAvailable);
    void print() const override;
};

#endif