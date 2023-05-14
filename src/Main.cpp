#include "HashTable/HashTable.hpp"
#include "Book/Book.hpp"

int main() {
    HashTable* hashTable = new HashTable();
    Book* book1 = new Book("The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", "Novel");
    hashTable->insert(book1);
    Book* book2 = new Book("Nineteen Eighty-Four", "George Orwell", "Secker & Warburg", "Novel");
    hashTable->insert(book2);
    Book* book3 = new Book("Ulysses", "James Joyce", "Sylvia Beach", "Novel");
    hashTable->insert(book3);

    Book* book25 = new Book("Nineteen Eighty-Four", "George Orwell", "Secker & Warburg", "Novel");
    hashTable->insert(book25);

    hashTable->searchPublisher("Secker & Warburg");


    return 0;
}