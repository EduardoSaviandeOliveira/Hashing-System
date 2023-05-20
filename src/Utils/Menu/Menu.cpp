#ifndef MENU_CPP
#define MENU_CPP

#include "Menu.hpp"

void Menu::run() {
    Library library = Library();

    Author author1 = Author("Author 1");
    Author author2 = Author("Author 2");

    Publisher publisher1 = Publisher("Publisher 1");
    Publisher publisher2 = Publisher("Publisher 2");

    library.addAuthor(author1);
    library.addAuthor(author2);

    library.addPublisher(publisher1);
    library.addPublisher(publisher2);

    Book book1 = Book("Book 1", author1.getId(), publisher1.getId(), "2", false, "1");
    Book book2 = Book("Book 2", author2.getId(), publisher2.getId(), "3", true, "2");

    library.addBook(book1);
    library.addBook(book2);

    library.printBook(book1.getID());

    library.printAuthor(author1.getId());
    library.printAuthor(author2.getId());

}

#endif