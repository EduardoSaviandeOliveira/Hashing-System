#include "Classes/Library/Library.hpp"


int main() {
    Library *library = new Library();

    Author *author1 = new Author("Author 1");
    Book *book1 = new Book("Sla", author1->getId(), 1, "Genre 1");
    Book *book2 = new Book("Sla2", author1->getId(), 1, "Genre 1");


    library->addAuthor(author1);
    library->addBook(book1);
    library->addBook(book2);


    author1->setBook(book1->getID());
    author1->setBook(book2->getID());

    library->printAuthor(0);



    return 0;
}