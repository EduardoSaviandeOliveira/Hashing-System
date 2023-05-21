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
        LinkedList<int> *magazines;
    public:
        Publisher();
        Publisher(std::string name);
        ~Publisher();

        int getId();
        std::string getName();
        LinkedList<int>* getBooks();
        LinkedList<int>* getMagazines();

        void setName(std::string name);
        void addBook(int id);
        void removeBook(int id);
        void addMagazine(int id);
        void removeMagazine(int id);
};

#endif