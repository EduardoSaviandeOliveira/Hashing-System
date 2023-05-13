#ifndef HASH_CPP
#define HASH_CPP

#include "HashTable.hpp"
#include "../LinkedList/LinkedList.hpp"

namespace hst {
    template <typename K, typename V>
    hst::HashTable<K,V> create() {
        hst::HashTable<K,V> hashTable;

        for (int i = 0; i < hst::HASHMAX; i++)
            hashTable.table[i] = nullptr;

        return hashTable;
    }
    template <typename K, typename V>
    bool insert(hst::HashTable<K,V>& hashTable, K key, V value) {
        int index = key % hst::HASHMAX;

        hst::HashNode<K,V>* newNode = new hst::HashNode<K,V>;
        newNode->key = key;
        newNode->value = value;
        newNode->next = nullptr;

        if (hashTable.table[index] == nullptr) {
            hashTable.table[index] = newNode;
            return true;
        }

        hst::HashNode<K,V>* temp = hashTable.table[index];
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
        return true;
    }
}

#endif