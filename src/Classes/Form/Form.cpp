#ifndef FORM_CPP
#define FORM_CPP

#include "Form.hpp"

Form::Form(std::string name, Publisher* publisher, std::string gender, std::string allocationDate, bool isAvailable): Item(name) {
    this->publisher = publisher;
    this->gender = gender;
    this->allocationDate = allocationDate;
    this->isAvailable = isAvailable;
}

void Form::print() const {
    std::cout << this->id << " - " << this->name << std::endl;
}

#endif