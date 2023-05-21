#ifndef AUTHOR_HPP
#define AUTHOR_HPP

#include <iostream>
#include <string>

#include "../../Utils/LinkedList/LinkedList.hpp"

class Author {
    private:
        static int nextId;
        int id;
        std::string name;
        LinkedList<int> *books;
        LinkedList<int> *magazines;
    public:
        Author();
        Author(std::string name);
        ~Author();
        int getId();
        std::string getName();
        void setName(std::string name);
        LinkedList<int>* getBooks();
        LinkedList<int>* getMagazines();

        void addBook(int id);
        void removeBook(int id);

        void addMagazine(int id);
        void removeMagazine(int id);
};

#endif