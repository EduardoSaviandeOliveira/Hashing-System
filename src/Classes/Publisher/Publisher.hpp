#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include <iostream>
#include "../../Utils/LinkedList/LinkedList.hpp"

class Publisher {
    private:
        static int nextId;
        int id;
        std::string name;
        LinkedList<int> *books;
    public:
        Publisher();
        Publisher(std::string name);
        ~Publisher();

        int getId();
        std::string getName();
        LinkedList<int>* getBooks();

        void setName(std::string name);
        void addBook(int id);
        void removeBook(int id);
};

#endif