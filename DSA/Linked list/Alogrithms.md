 ## Structure of a Node:
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

Certainly! Below are the algorithms for basic operations in a Singly Linked List written in an easy-to-understand way using C++.

Structure of a Node:
Each node contains data and a pointer to the next node.

cpp
Copy code
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
  ## Linked List Class:
This class manages the operations on the linked list, such as insertion, deletion, traversal, etc.

cpp
```
class LinkedList {
public:
    Node* head;  // Pointer to the head of the list

    LinkedList() { 
        head = nullptr; 
    }

    // Insert Operations
    void insertAtBeginning(int data);
    void insertAtEnd(int data);
    void insertAtPosition(int data, int position);

    // Delete Operations
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteAtPosition(int position);

    // Search Operation
    bool search(int key);

    // Traverse the list
    void traverse();

    // Reverse the linked list
    void reverse();
};
```

 ## Operations:
1. Insertion at the Beginning
Algorithm:

Create a new node.
Point the new node’s next to the current head.
Update the head to the new node.
Code Example:


 ``` void LinkedList::insertAtBeginning(int data) {
    Node* newNode = new Node(data); // Create new node
    newNode->next = head;           // Point new node's next to head
    head = newNode;                 // Update head to new node
}
Usage:

cpp
Copy code
LinkedList list;
list.insertAtBeginning(10);
list.insertAtBeginning(20); // List: 20 -> 10 -> NULL
```
2. Insertion at the End
Algorithm:

Create a new node.
Traverse to the last node.
Point the last node’s next to the new node.
Code Example:

```
    void LinkedList::insertAtEnd(int data) {
    Node* newNode = new Node(data); // Create new node
    if (head == nullptr) {
        head = newNode;             // If list is empty, make new node the head
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) { // Traverse to the end of the list
        temp = temp->next;
    }
    temp->next = newNode;           // Point last node's next to new node

}
```
Usage:

````
list.insertAtEnd(30); // List: 20 -> 10 -> 30 -> NULL
````
3. Insertion at a Specific Position
Algorithm:

Create a new node.
Traverse to the node just before the desired position.
Adjust the next pointers to insert the new node.
Code Example:

cpp
Copy code
void LinkedList::insertAtPosition(int data, int position) {
    Node* newNode = new Node(data);  // Create new node
    if (position == 0) {
        insertAtBeginning(data);     // Insert at beginning if position is 0
        return;
    }
    Node* temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;           // Traverse to the node just before the position
    }
    if (temp == nullptr) {
        cout << "Position out of range\n";
        return;
    }
    newNode->next = temp->next;      // Insert node at the desired position
    temp->next = newNode;
}
Usage:

cpp
Copy code
list.insertAtPosition(25, 1); // List: 20 -> 25 -> 10 -> 30 -> NULL
4. Deletion from the Beginning
Algorithm:

Update the head to the second node.
Free the original head node.
Code Example:

cpp
Copy code
void LinkedList::deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    head = head->next; // Update head to second node
    delete temp;       // Free memory of the old head
}
Usage:

cpp
Copy code
list.deleteFromBeginning(); // List: 25 -> 10 -> 30 -> NULL
5. Deletion from the End
Algorithm:

Traverse to the second-to-last node.
Set its next to nullptr.
Free the last node.
Code Example:

cpp
Copy code
void LinkedList::deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    if (head->next == nullptr) { // If there's only one node
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) { // Traverse to second-to-last node
        temp = temp->next;
    }
    delete temp->next;  // Free memory of the last node
    temp->next = nullptr;
}
Usage:

cpp
Copy code
list.deleteFromEnd(); // List: 25 -> 10 -> NULL
6. Traversal
Algorithm:

Start at the head and traverse each node, printing its data.
Code Example:

cpp
Copy code
void LinkedList::traverse() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
Usage:

cpp
Copy code
list.traverse(); // Output: 25 -> 10 -> NULL
7. Search for an Element
Algorithm:

Traverse the list and check if the data matches the target key.
Code Example:

cpp
Copy code
bool LinkedList::search(int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) {
            return true;  // Element found
        }
        temp = temp->next;
    }
    return false; // Element not found
}
Usage:

cpp
Copy code
if (list.search(10)) {
    cout << "Found 10\n";
} else {
    cout << "10 not found\n";
}
8. Reverse the Linked List
Algorithm:

Use three pointers: previous, current, and next. Reverse the direction of the next pointers.
Code Example:

cpp
Copy code
void LinkedList::reverse() {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    while (curr != nullptr) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse current node's pointer
        prev = curr;        // Move prev and curr one step forward
        curr = next;
    }
    head = prev;            // Update head to the last non-null node
}
Usage:

cpp
Copy code
list.reverse(); // List is now reversed
list.traverse(); // Output: 10 -> 25 -> NULL
Full Example of Usage:
cpp
Copy code
int main() {
    LinkedList list;

    // Insert elements
    list.insertAtBeginning(10);
    list.insertAtEnd(30);
    list.insertAtPosition(20, 1);
    list.traverse(); // Output: 10 -> 20 -> 30 -> NULL

    // Delete elements
    list.deleteFromBeginning();
    list.traverse(); // Output: 20 -> 30 -> NULL

    list.deleteFromEnd();
    list.traverse(); // Output: 20 -> NULL

    // Search for an element
    if (list.search(20)) {
        cout << "Found 20\n";
    } else {
        cout << "20 not found\n";
    }

    // Reverse the list
    list.reverse();
    list.traverse(); // Output: 20 -> NULL

    return 0;
}