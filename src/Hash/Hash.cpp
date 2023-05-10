#ifndef HASH_CPP
#define HASH_CPP

#include "Hash.hpp"

template <typename K, typename V>
HashTable<K,V> createHashTable() {
    HashTable<K,V> hashTable;

    for (int i = 0; i < HASHMAX; i++)
        hashTable.table[i] = nullptr;

    return hashTable;
}

template <typename K, typename V>
bool insert(HashTable<K,V>& hashTable, K key, V value) {
    int index = key % HASHMAX;

    HashNode<K,V>* newNode = new HashNode<K,V>;
    newNode->key = key;
    newNode->value = value;
    newNode->next = nullptr;

    if (hashTable.table[index] == nullptr) {
        hashTable.table[index] = newNode;
        return true;
    }

    HashNode<K,V>* temp = hashTable.table[index];
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
    return true;
}

#endif