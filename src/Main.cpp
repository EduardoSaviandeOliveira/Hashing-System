#include "HashTable/HashTable.hpp"

int main() {
    HashTable* hashTable = new HashTable();
    Item* item1 = new Item("Item 1");
    Item* item2 = new Item("Item 2");
    Item* item3 = new Item("Item 3");
    Item* item4 = new Item("Item 4");


    hashTable->insert(item1);
    hashTable->insert(item2);
    hashTable->insert(item3);
    hashTable->insert(item4);

    //print id
    hashTable->print();

    return 0;
}