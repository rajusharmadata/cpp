# Singly Linked List in C++

A simple and efficient implementation of a **Singly Linked List** in C++. This project demonstrates fundamental data structure concepts with basic operations such as insertion, deletion, traversal, and searching.

## Table of Contents

- [Introduction](#introduction)
- [Operations](#operations)
  - [1. Insertion](#1-insertion)
    - [Insert at the Beginning](#insert-at-the-beginning)
    - [Insert at the End](#insert-at-the-end)
    - [Insert at a Specific Position](#insert-at-a-specific-position)
  - [2. Deletion](#2-deletion)
    - [Delete from the Beginning](#delete-from-the-beginning)
    - [Delete from the End](#delete-from-the-end)
    - [Delete at a Specific Position](#delete-at-a-specific-position)
  - [3. Search](#3-search)
  - [4. Traversal](#4-traversal)
  - [5. Reverse](#5-reverse)
- [Usage](#usage)
- [Installation](#installation)
- [License](#license)

## Introduction

A linked list is a linear data structure consisting of nodes where each node contains data and a pointer to the next node in the sequence. This structure allows for efficient insertion and deletion operations, making it ideal for dynamic memory management.

## Operations

### 1. Insertion

**Insert at the Beginning**

Inserts a new node at the start of the list.

```cpp
void LinkedList::insertAtBeginning(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
Usage:

cpp
Copy code
list.insertAtBeginning(10); // List: 10 -> NULL
Insert at the End

Inserts a new node at the end of the list.

cpp
Copy code
void LinkedList::insertAtEnd(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
Usage:

cpp
Copy code
list.insertAtEnd(20); // List: 10 -> 20 -> NULL
Insert at a Specific Position

Inserts a new node at a specified position in the list.

cpp
Copy code
void LinkedList::insertAtPosition(int data, int position) {
    Node* newNode = new Node(data);
    if (position == 0) {
        insertAtBeginning(data);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Position out of range\n";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
Usage:

cpp
Copy code
list.insertAtPosition(15, 1); // List: 10 -> 15 -> 20 -> NULL
2. Deletion
Delete from the Beginning

Removes the first node from the list.

cpp
Copy code
void LinkedList::deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
Usage:

cpp
Copy code
list.deleteFromBeginning(); // List: 15 -> 20 -> NULL
Delete from the End

Removes the last node from the list.

cpp
Copy code
void LinkedList::deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
Usage:

cpp
Copy code
list.deleteFromEnd(); // List: 15 -> NULL
Delete at a Specific Position

Removes a node at a specified position in the list.

cpp
Copy code
void LinkedList::deleteAtPosition(int position) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    if (position == 0) {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range\n";
        return;
    }
    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
}
Usage:

cpp
Copy code
list.deleteAtPosition(0); // List: NULL (if 15 was the only node)
3. Search
Searches for an element in the list.

cpp
Copy code
bool LinkedList::search(int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) {
            return true; // Element found
        }
        temp = temp->next;
    }
    return false; // Element not found
}
Usage:

cpp
Copy code
if (list.search(15)) {
    cout << "Found 15\n";
} else {
    cout << "15 not found\n";
}
4. Traversal
Displays all the elements in the list.

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
list.traverse(); // Output: 15 -> NULL
5. Reverse
Reverses the linked list.

cpp
Copy code
void LinkedList::reverse() {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    while (curr != nullptr) {
        next = curr->next; // Store next node
        curr->next = prev; // Reverse current node's pointer
        prev = curr;       // Move prev and curr one step forward
        curr = next;
    }
    head = prev; // Update head to the last non-null node
}
Usage:

cpp
Copy code
list.reverse(); // List order reversed
Usage
To use this implementation, follow these steps:

Create a linked list object:

cpp
Copy code
LinkedList list;
Perform operations:

cpp
Copy code
list.insertAtBeginning(10);
list.insertAtEnd(20);
list.insertAtPosition(15, 1);
list.traverse(); // Output: 10 -> 15 -> 20 -> NULL
list.deleteFromBeginning();
list.traverse(); // Output: 15 -> 20 -> NULL
Installation
To get started, clone this repository:

bash
Copy code
git clone https://github.com/yourusername/singly-linked-list.git
cd singly-linked-list
Compile the code using a C++ compiler:

bash
Copy code
g++ main.cpp -o linkedlist
License
This project is licensed under the MIT License - see the LICENSE file for details.

Feel free to contribute to this project by submitting issues or pull requests. Happy coding!

markdown
Copy code





