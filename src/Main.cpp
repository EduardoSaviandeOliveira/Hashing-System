#include "HashTable/HashTable.hpp"
#include "Structs/Structs.hpp"

int main() {
    HashTable* table = new HashTable();
    Item *item1 = new Item("item1");
    Item *item2 = new Item("item2");


    table->insert(item1);
    table->insert(item2);

    table->print(0);

    return 0;
}