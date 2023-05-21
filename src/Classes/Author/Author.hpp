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
    public:
        Author();
        Author(std::string name);
        ~Author();
        int getId();
        std::string getName();
        void setName(std::string name);
        LinkedList<int>* getBooks();

        void addBook(int id);
        void removeBook(int id);
};

#endif