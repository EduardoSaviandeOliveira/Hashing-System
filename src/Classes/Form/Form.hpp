#ifndef FORM_HPP
#define FORM_HPP

#include "../Item/Item.hpp"
#include "../Author/Author.hpp"
#include "../Publisher/Publisher.hpp"

class Form: public Item {
    public:
        Autor autor;
        Publisher publisher;
        std::string gender;
        std::string allocationDate;
        bool isAvailable;

        Form(Autor autor, Publisher publisher, std::string gender, std::string allocationDate, bool isAvailable)
        : Item { name }
        , autor { autor }
        , publisher {publisher}
        , gender { gender }
        , allocationDate { allocationDate}
        , isAvailable { isAvailable }
        {
        }
};

#endif