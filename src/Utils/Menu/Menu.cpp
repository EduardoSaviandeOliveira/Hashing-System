#ifndef MENU_CPP
#define MENU_CPP

#include "Menu.hpp"

#include <iostream>
#include <string>

void Menu::mainMenu() {
    std::string name = "Mario Mario";
    std::string option = "";

    std::cout << "Welcome " << name << "!" << std::endl;
    std::cout << "1. Enter application" << std::endl;
    std::cout << "2. Exit application" << std::endl;
    std::cout << "Option: ";
    std::cin >> option;

    if (option == "1") {
        std::cout << "Entering application..." << std::endl;
        this->run();
    } else if (option == "2") {
        std::cout << "Exiting application..." << std::endl;
    } else {
        std::cout << "Invalid option" << std::endl;
    }
}

void Menu::run() {
    Library library = Library();
    std::string option = "";

    while(option != "0")  {
        std::cout << "1. Register book" << std::endl;
        std::cout << "2. Register magazine" << std::endl;
        std::cout << "3. Register author" << std::endl;
        std::cout << "4. Register publisher" << std::endl;
        std::cout << "5. Register user" << std::endl;

        std::cout << "6. Alter book" << std::endl;
        std::cout << "7. Alter magazine" << std::endl;
        std::cout << "8. Alter author" << std::endl;
        std::cout << "9. Alter publisher" << std::endl;

        std::cout << "10.Borrow book" << std::endl;
        std::cout << "11.Borrow magazine" << std::endl;
        std::cout << "12.Return book" << std::endl;
        std::cout << "13.Return magazine" << std::endl;

        std::cout << "14.Print publisher" << std::endl;
        std::cout << "15.Print author" << std::endl;
        std::cout << "16.Print book" << std::endl;
        std::cout << "17.Print magazine" << std::endl;
        std::cout << "18.Print late books" << std::endl;
        std::cout << "19.Print late magazines" << std::endl;
        std::cout << "20.Print book by name" << std::endl;
        std::cout << "21.Print magazine by name" << std::endl;
        std::cout << "22.Print books by genre" << std::endl;
        std::cout << "23.Print magazines by genre" << std::endl;
        std::cout << "24.Print user by name" << std::endl;

        std::cin >> option;

        if(option == "1") {
            std::string title;
            int author;
            int publisher;
            std::string genre;

            std::cout << "Title: ";
            std::cin >> title;
            std::cout << "Author: ";
            std::cin >> author;
            std::cout << "Publisher: ";
            std::cin >> publisher;
            std::cout << "Genre: ";
            std::cin >> genre;

            Book book = Book(title, author, publisher, genre);
            library.addBook(book);
        } else if(option == "2") {
            std::string title;
            int author;
            int publisher;
            std::string genre;

            std::cout << "Title: ";
            std::cin >> title;
            std::cout << "Author: ";
            std::cin >> author;
            std::cout << "Publisher: ";
            std::cin >> publisher;
            std::cout << "Genre: ";
            std::cin >> genre;

            Magazine magazine = Magazine(title, author, publisher, genre);
            library.addMagazine(magazine);
        } else if(option == "3") {
            std::string name;

            std::cout << "Name: ";
            std::cin >> name;

            Author author = Author(name);
            library.addAuthor(author);
        } else if(option == "4") {
            std::string name;

            std::cout << "Name: ";
            std::cin >> name;

            Publisher publisher = Publisher(name);
            library.addPublisher(publisher);
        } else if(option == "5") {
            std::string name;

            std::cout << "Name: ";
            std::cin >> name;

            User user = User(name);
            library.addUser(user);
        } else if(option == "6") {
            int id;
            std::string title;
            int author;
            int publisher;
            std::string genre;

            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Title: ";
            std::cin >> title;
            std::cout << "Author: ";
            std::cin >> author;
            std::cout << "Publisher: ";
            std::cin >> publisher;
            std::cout << "Genre: ";
            std::cin >> genre;

            Book book = Book(title, author, publisher, genre);
            library.removeBook(id);
            library.addBook(book);
        } else if(option == "7") {
            int id;
            std::string title;
            int author;
            int publisher;
            std::string genre;

            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Title: ";
            std::cin >> title;
            std::cout << "Author: ";
            std::cin >> author;
            std::cout << "Publisher: ";
            std::cin >> publisher;
            std::cout << "Genre: ";
            std::cin >> genre;

            Magazine magazine = Magazine(title, author, publisher, genre);
            library.removeMagazine(id);
            library.addMagazine(magazine);
        } else if(option == "8") {
            int id;
            std::string name;

            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Name: ";
            std::cin >> name;

            Author author = Author(name);
            library.removeAuthor(id);
            library.addAuthor(author);
        } else if(option == "9") {
            int id;
            std::string name;

            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Name: ";
            std::cin >> name;

            Publisher publisher = Publisher(name);
            library.removePublisher(id);
            library.addPublisher(publisher);
        } else if(option == "10") {
            int userID;
            int bookID;
            std::string date;

            std::cout << "User ID: ";
            std::cin >> userID;
            std::cout << "Book ID: ";
            std::cin >> bookID;
            std::cout << "Date: ";
            std::cin >> date;

            library.borrowBook(userID, bookID, date);
        } else if(option == "11") {
            int userID;
            int magazineID;
            std::string date;

            std::cout << "User ID: ";
            std::cin >> userID;
            std::cout << "Magazine ID: ";
            std::cin >> magazineID;
            std::cout << "Date: ";
            std::cin >> date;

            library.borrowMagazine(userID, magazineID, date);
        } else if(option == "12") {
            int userID;
            int bookID;

            std::cout << "User ID: ";
            std::cin >> userID;
            std::cout << "Book ID: ";
            std::cin >> bookID;

            library.returnBook(userID, bookID);
        } else if(option == "13") {
            int userID;
            int magazineID;

            std::cout << "User ID: ";
            std::cin >> userID;
            std::cout << "Magazine ID: ";
            std::cin >> magazineID;

            library.returnMagazine(userID, magazineID);
        } else if(option == "14") {
            int id;

            std::cout << "ID: ";
            std::cin >> id;

            library.printPublisher(id);
        } else if(option == "15") {
            int id;

            std::cout << "ID: ";
            std::cin >> id;

            library.printAuthor(id);
        } else if(option == "16") {
            int id;

            std::cout << "ID: ";
            std::cin >> id;

            library.printBook(id);
        } else if(option == "17") {
            int id;

            std::cout << "ID: ";
            std::cin >> id;

            library.printMagazine(id);
        } else if(option == "18") {
            int id;
            std::cout << "User ID: ";
            std::cin >> id;
            library.printBorrowedBooks(id);
        } else if(option == "19") {
            int id;
            std::cin >> id;

            library.printBorrowedMagazines(id);
        } else if(option == "20") {
            std::string name;

            std::cout << "Name: ";
            std::cin >> name;

            library.printBooksByName(name);
        } else if(option == "21") {
            std::string name;

            std::cout << "Name: ";
            std::cin >> name;

            library.printMagazinesByName(name);
        } else if(option == "22") {
            std::string genre;

            std::cout << "Genre: ";
            std::cin >> genre;

            library.printGenreBooks(genre);
        } else if(option == "23") {
            std::string genre;

            std::cout << "Genre: ";
            std::cin >> genre;

            library.printGenreMagazines(genre);
        } else if(option == "24") {
            std::string name;

            std::cout << "Name: ";
            std::cin >> name;

            library.printUser(name);
        } else {
            std::cout << "Invalid option" << std::endl;
        }
    }
}
#endif