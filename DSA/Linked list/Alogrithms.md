 # Structure of a Node:
Each node contains data and a pointer to the next node.
 ```
 #include <iostream>
using namespace std;

class Node {
public:
    int data;   // Data in the node
    Node* next; // Pointer to the next node

    Node(int val) {  // Constructor to create a new node
        data = val;
        next = nullptr;
    }
}; 
```