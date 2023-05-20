#ifndef LIBRARY_CPP
#define LIBRARY_CPP

#include "Library.hpp"

Library::Library() {
    users = new HashTable<int, User>();
    authors = new HashTable<int, Author>();
    publishers = new HashTable<int, Publisher>();
    books = new HashTable<int, Book>();
    magazines = new HashTable<int, Magazine>();
}

void Library::addAuthor(Author author) {
    authors->insert(author.getId(), author);
}

void Library::removeAuthor(int id) {
    authors->remove(id);
}

void Library::printAuthor(int id) {
    std::cout << "Author ID: " << authors->get(id)->getId() << std::endl;
    std::cout << "Author Name: " << authors->get(id)->getName() << std::endl;
    std::cout << "Author Books: " << std::endl;
    LinkedList<int> *books = authors->get(id)->getBooks();
    for (int i = 0; i < books->getSize(); i++) {
        std::cout << this->books->get(books->get(i))->getTitle() << std::endl;
    }
}

void Library::addPublisher(Publisher publisher) {
    publishers->insert(publisher.getId(), publisher);
}

void Library::removePublisher(int id) {
    publishers->remove(id);
}

void Library::printPublisher(int id) {
    std::cout << "Publisher ID: " << publishers->get(id)->getId() << std::endl;
    std::cout << "Publisher Name: " << publishers->get(id)->getName() << std::endl;
    std::cout << "Publisher Books: " << std::endl;
    LinkedList<int> *books = publishers->get(id)->getBooks();
    for (int i = 0; i < books->getSize(); i++) {
        std::cout << this->books->get(books->get(i))->getTitle() << std::endl;
    }
}

void Library::addBook(Book book) {
    authors->get(book.getAuthor())->addBook(book.getID());
    books->insert(book.getID(), book);
}

void Library::removeBook(int id) {
    books->remove(id);
}

void Library::printBook(int id) {
    std::cout << "Book ID: " << books->get(id)->getID() << std::endl;
    std::cout << "Book Title: " << books->get(id)->getTitle() << std::endl;// seach for the author id in the hash table and print the name
    std::cout << "Book Author: " << authors->get(books->get(id)->getAuthor())->getName() << std::endl;
    std::cout << "Book Publisher: " << publishers->get(books->get(id)->getPublisher())->getName() << std::endl;
    std::cout << "Book Genre: " << books->get(id)->getGenre() << std::endl;
}

void Library::addMagazine(Magazine magazine) {
    magazines->insert(magazine.getID(), magazine);
}

void Library::removeMagazine(int id) {
    magazines->remove(id);
}

void Library::printMagazine(int id) {
    std::cout << "Magazine ID: " << magazines->get(id)->getID() << std::endl;
    std::cout << "Magazine Title: " << magazines->get(id)->getTitle() << std::endl;
    std::cout << "Magazine Author: " << authors->get(magazines->get(id)->getAuthor())->getName() << std::endl;
    std::cout << "Magazine Publisher: " << publishers->get(magazines->get(id)->getPublisher())->getName() << std::endl;
    std::cout << "Magazine Genre: " << magazines->get(id)->getGenre() << std::endl;
}

void Library::addUser(User user) {
    users->insert(user.getID(), user);
}

void Library::removeUser(int id) {
    users->remove(id);
}

void Library::printUser(int id) {
    std::cout << "User ID: " << users->get(id)->getID() << std::endl;
    std::cout << "User Name: " << users->get(id)->getName() << std::endl;
    std::cout << "User Books: " << std::endl;
    LinkedList<int> books = users->get(id)->getBorrowedBooks();
    for (int i = 0; i < books.getSize(); i++) {
        std::cout << this->books->get(books.get(i))->getTitle() << std::endl;
    }
}

void Library::printBooksHistory(int id) {
    std::cout << "User ID: " << users->get(id)->getID() << std::endl;
    std::cout << "User Name: " << users->get(id)->getName() << std::endl;
    std::cout << "User Books History: " << std::endl;
    LinkedList<int> books = users->get(id)->getBorrowedBooksHistory();
    for (int i = 0; i < books.getSize(); i++) {
        std::cout << this->books->get(books.get(i))->getTitle() << std::endl;
    }
}

void Library::borrowBook(int userID, int bookID, std::string date) {
    User* user = users->get(userID);
    if (!user) {
        std::cout << "User not found" << std::endl;
        return;
    }

    Book* book = books->get(bookID);
    if (!book) {
        std::cout << "Book not found" << std::endl;
        return;
    }

    if (book->getIsBorrow()) {
        std::cout << "Book is already borrowed" << std::endl;
        return;
    }

    if (IsValidDate(date) == false) {
        std::cout << "Invalid date" << std::endl;
        return;
    }

    user->borrowBook(bookID);
    book->setIsBorrow(true);
    book->setDateOfBorrow(date);
    std::cout << "Book borrowed successfully" << std::endl;
}


void Library::returnBook(int userID, int bookID) {
    if (!books->get(bookID)->getIsBorrow()) {
        std::cout << "Book is not borrowed" << std::endl;
        return;
    }

    users->get(userID)->returnBook(bookID);
    books->get(bookID)->setIsBorrow(false);
    books->get(bookID)->setDateOfBorrow("");
}

void Library::printBorrowedBooks(int userID) {
    LinkedList<int> books = users->get(userID)->getBorrowedBooks();
    for (int i = 0; i < books.getSize(); i++) {
        std::cout << this->books->get(books.get(i))->getID() << " " << this->books->get(books.get(i))->getTitle() << " " << this->books->get(books.get(i))->getDateOfBorrow() << std::endl;
    }
}

void Library::borrowMagazine(int userID, int magazineID, std::string date) {
    User* user = users->get(userID);
    if (!user) {
        std::cout << "User not found" << std::endl;
        return;
    }

    Magazine* magazine = magazines->get(magazineID);
    if (!magazine) {
        std::cout << "Magazine not found" << std::endl;
        return;
    }

    if (magazine->getIsBorrow()) {
        std::cout << "Magazine is already borrowed" << std::endl;
        return;
    }

    if (IsValidDate(date) == false) {
        std::cout << "Invalid date" << std::endl;
        return;
    }

    user->borrowMagazine(magazineID);
    magazine->setIsBorrow(true);
    magazine->setDateOfBorrow(date);
    std::cout << "Magazine borrowed successfully" << std::endl;
}

void Library::returnMagazine(int userID, int magazineID) {
    if (!magazines->get(magazineID)->getIsBorrow()) {
        std::cout << "Magazine is not borrowed" << std::endl;
        return;
    }

    users->get(userID)->returnMagazine(magazineID);
    magazines->get(magazineID)->setIsBorrow(false);//verify date
    if (magazines->get(magazineID)->getDateOfBorrow() == "") {
        std::cout << "Magazine is not borrowed" << std::endl;
        return;
    }
    magazines->get(magazineID)->setDateOfBorrow("");
}

void Library::printBorrowedMagazines(int userID) {
    LinkedList<int> magazines = users->get(userID)->getBorrowedMagazines();
    for (int i = 0; i < magazines.getSize(); i++) {
        std::cout << this->magazines->get(magazines.get(i))->getID() << " " << this->magazines->get(magazines.get(i))->getTitle() << " " << this->magazines->get(magazines.get(i))->getDateOfBorrow() << std::endl;
    }
}

void Library::printGenreBooks(std::string genre) {
    for (int i = 0; i < books->getSize(); i++) {
        if (books->get(i)->getGenre() == genre) {
            std::cout << books->get(i)->getID() << " " << books->get(i)->getTitle() << std::endl;
        }
    }
}

void Library::printGenreMagazines(std::string genre) {
    for (int i = 0; i < magazines->getSize(); i++) {
        if (magazines->get(i)->getGenre() == genre) {
            std::cout << magazines->get(i)->getID() << " " << magazines->get(i)->getTitle() << std::endl;
        }
    }
}

void Library::printLateBooks() { //with current date
    for (int i = 0; i < books->getSize(); i++) {
        if (books->get(i)->getIsBorrow()) {
            if (IsLate(books->get(i)->getDateOfBorrow()) == true) {
                std::cout << books->get(i)->getID() << " " << books->get(i)->getTitle() << std::endl;
            }
        }
    }
}

void Library::printLateMagazines() {
    for (int i = 0; i < magazines->getSize(); i++) {
        if (magazines->get(i)->getIsBorrow()) {
            if (IsLate(magazines->get(i)->getDateOfBorrow()) == true) {
                std::cout << magazines->get(i)->getID() << " " << magazines->get(i)->getTitle() << std::endl;
            }
        }
    }
}

#endif