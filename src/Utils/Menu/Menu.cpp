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

    Book book1 = Book("Book 1", author1.getId(), publisher1.getId(), "2", "1");
    Book book2 = Book("Book 2", author2.getId(), publisher2.getId(), "3", "2");

    library.addBook(book1);
    library.addBook(book2);

    User user1 = User("User 1");
    User user2 = User("User 2");

    library.addUser(user1);
    library.addUser(user2);

    library.borrowBook(user1.getID(), book1.getID(), "2020-10-09");
    library.borrowBook(user1.getID(), book2.getID(), "2020-10-09");

    library.printBorrowedBooks(user1.getID());

    library.returnBook(user1.getID(), book1.getID());

    //library.printBorrowedBooks(user1.getID());


}

#endif