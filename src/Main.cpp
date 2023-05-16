#include "Classes/Library/Library.hpp"


int main() {
    Library *library = new Library();
    Book *book = new Book("The Lord of the Rings", "J. R. R. Tolkien", "George Allen & Unwin", "Fantasy");

    library->addBook(book);
    library->printBook(0);

    Author *author = new Author("J. R. R. Tolkien");

    //library->addAuthor(author);



    return 0;
}