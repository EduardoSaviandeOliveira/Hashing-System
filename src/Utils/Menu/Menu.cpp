#ifndef MENU_CPP
#define MENU_CPP

#include "Menu.hpp"

void Menu::run() {
    Library library = Library();

    Author author1 = Author("Author 1");

    Publisher publisher1 = Publisher("Publisher 1");

    library.addAuthor(author1);

    library.addPublisher(publisher1);

    Book book1 = Book("Book 1", author1.getId(), publisher1.getId(), "2", "1");
    Book book2 = Book("Book 2", author1.getId(), publisher1.getId(), "2", "2");
    Book book3 = Book("Book 3", author1.getId(), publisher1.getId(), "2", "3");
    Book book4 = Book("Book 4", author1.getId(), publisher1.getId(), "2", "4");
    Book book5 = Book("Book 5", author1.getId(), publisher1.getId(), "2", "5");
    Book book6 = Book("Book 6", author1.getId(), publisher1.getId(), "2", "6");
    Book book7 = Book("Book 7", author1.getId(), publisher1.getId(), "2", "7");
    Book book8 = Book("Book 8", author1.getId(), publisher1.getId(), "2", "8");
    Book book9 = Book("Book 9", author1.getId(), publisher1.getId(), "2", "9");
    Book book10 = Book("Book 10", author1.getId(), publisher1.getId(), "2", "10");
    Book book11 = Book("Book 11", author1.getId(), publisher1.getId(), "2", "11");
    Book book12 = Book("Book 12", author1.getId(), publisher1.getId(), "2", "12");
    Book book13 = Book("Book 13", author1.getId(), publisher1.getId(), "2", "13");

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);
    library.addBook(book6);
    library.addBook(book7);
    library.addBook(book8);
    library.addBook(book9);
    library.addBook(book10);
    library.addBook(book11);
    library.addBook(book12);
    library.addBook(book13);



    User user1 = User("User 1");
    library.addUser(user1);

    library.borrowBook(user1.getID(), book1.getID(), "2020-10-09");
    // // library.borrowBook(user1.getID(), book2.getID(), "2020-10-09");

    library.printBorrowedBooks(user1.getID());
    library.returnBook(user1.getID(), book1.getID());
    library.printBorrowedBooks(user1.getID());
}

#endif