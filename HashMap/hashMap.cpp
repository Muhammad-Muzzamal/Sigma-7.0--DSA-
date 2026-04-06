#include <iostream>
#include <string>
using namespace std;

// node
class Node
{
public:
    string key;
    int val;
    Node *next;
    Node(string key, int val)
    {
        this->key = key;
        this->val = val;
    }
};

// Hash Table
class HashTable
{

    int totalSize;
    int currSize;
    Node **table;

    int hashFunction(string key) {
        int idx = 0;

        for(int i=0; i<key.size(); i++) {
            idx = idx + (key[i] * key[i]) % this->totalSize;
        }

        return idx;
    }

public:
    HashTable(int size)
    {
        this->totalSize = size;
        currSize = 0;
        // create table dynamically
        table = new Node *[totalSize];

        // initially every index of array has NULL value
        for (int i = 0; i < totalSize; i++)
        {
            table[i] = NULL;
        }
    }

    // insert a value to a hash table
    void insert(string key, int val) {
        int idx = hashFunction(key);

        Node* newNode = new Node(key, val);

        newNode->next = head;
        head = newNode;
        currSize++;
    }
};

int main()
{

    return 0;
}