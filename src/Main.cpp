#include "HashTable/HashTable.hpp"
#include "Classes/Author/Author.hpp"
#include "Classes/Publisher/Publisher.hpp"
#include "Classes/User/User.hpp"
#include "Classes/Form/Form.hpp"
#include "Classes/Book/Book.hpp"
#include "Classes/Magazine/Magazine.hpp"

int main() {
    HashTable* hashTable = new HashTable();

    Item *author1 = new Author("Author 1");
    Author *author2 = new Author("Author 2");

    Item *publisher1 = new Publisher("Publisher 1");
    Item *publisher2 = new Publisher("Publisher 2");

    Form *book1 = new Form("Book 1", (Publisher*) publisher1, "Book", "01/01/2020", true);

    Form *magazine1 = new Form("Magazine 1", (Publisher*) publisher2, "Magazine", "01/01/2020", true);

    author2->addBook(book1);

    author2->printBooks();

    hashTable->print();

    return 0;
}