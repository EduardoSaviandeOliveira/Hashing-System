#ifndef HASH_HPP
#define HASH_HPP

#include <iostream>

namespace hst {
    const int HASHMAX = 69;

    template <typename K, typename V>
    struct HashNode {
        K key;
        V value;
        HashNode* next;
    };

    template <typename K, typename V>
    struct HashTable {
        HashNode<K,V>* table[HASHMAX];
    };

    template <typename K, typename V>
    HashTable<K,V> create();

    template <typename K, typename V>
    bool insert(HashTable<K,V>& hashTable, K key, V value);
}
#endif