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

Library::~Library() {
    if (users != nullptr) {
        delete users;
        users = nullptr;
    }
    if (authors != nullptr) {
        delete authors;
        authors = nullptr;
    }
    if (publishers != nullptr) {
        delete publishers;
        publishers = nullptr;
    }
    if (books != nullptr) {
        delete books;
        books = nullptr;
    }
    if (magazines != nullptr) {
        delete magazines;
        magazines = nullptr;
    }
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

// verificar se user tem algum livro em atraso
// set date to current date

void Library::borrowBook(int userID, int bookID) {
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

    user->borrowBook(bookID);
    book->setIsBorrow(true);
    book->setDateOfBorrow(GetCurrentDate());

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
        std::cout << this->books->get(books.get(i))->getID() << " " << this->books->get(books.get(i))->getTitle() << std::endl;
    }
}

#endif