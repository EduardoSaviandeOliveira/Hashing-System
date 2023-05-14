#include "HashTable/HashTable.hpp"
#include "Classes/User/User.hpp"

int main() {
    HashTable* hashTable = new HashTable();
    Item *item1 = new User("User 1");
    Item *item2 = new User("User 2");
    Item *item3 = new User("User 3");
    Item *item4 = new User("User 4");


    hashTable->insert(item1);
    hashTable->insert(item2);
    hashTable->insert(item3);
    hashTable->insert(item4);

    //print id
    hashTable->print();

    return 0;
}