# Singly Linked List in C++

![Linked List](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Singly-linked-list.svg/1200px-Singly-linked-list.svg.png)

A **Singly Linked List** is a foundational data structure used in computer science to store collections of data. This C++ implementation showcases the essential operations you can perform on a linked list, including insertion, deletion, traversal, searching, and reversal.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
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
- [Contributing](#contributing)

## Introduction

A **Singly Linked List** is a linear data structure in which each element (node) points to the next, allowing for efficient dynamic memory allocation. This implementation provides a comprehensive set of functionalities to manipulate and manage linked lists in C++.

## Features

- **Dynamic Size**: Efficient memory usage as nodes can be added or removed without resizing.
- **Flexible Insertion/Deletion**: Insert or remove nodes from any position in the list.
- **Traversal**: Easily navigate through the list to display elements.
- **Search Functionality**: Check for the existence of specific values.
- **Reversal of List**: Reverse the order of the nodes in the list.

## Operations

### 1. Insertion

#### Insert at the Beginning

Insert a new node at the start of the list.

```cpp
void LinkedList::insertAtBeginning(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
Usage Example:

cpp
Copy code
list.insertAtBeginning(10); // List: 10 -> NULL
Insert at the End
Add a new node at the end of the list.

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
Usage Example:

cpp
Copy code
list.insertAtEnd(20); // List: 10 -> 20 -> NULL
Insert at a Specific Position
Insert a node at a specified position in the list.

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
Usage Example:

cpp
Copy code
list.insertAtPosition(15, 1); // List: 10 -> 15 -> 20 -> NULL
2. Deletion
Delete from the Beginning
Remove the first node from the list.

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
Usage Example:

cpp
Copy code
list.deleteFromBeginning(); // List: 15 -> 20 -> NULL
Delete from the End
Remove the last node from the list.

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
Usage Example:

cpp
Copy code
list.deleteFromEnd(); // List: 15 -> NULL
Delete at a Specific Position
Remove a node at a specified position in the list.

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
Usage Example:

cpp
Copy code
list.deleteAtPosition(0); // List: NULL (if 15 was the only node)
3. Search
Check for the existence of a value in the list.

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
Usage Example:

cpp
Copy code
if (list.search(15)) {
    cout << "Found 15\n";
} else {
    cout << "15 not found\n";
}
4. Traversal
Display all the elements in the list.

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
Usage Example:

cpp
Copy code
list.traverse(); // Output: 15 -> NULL
5. Reverse
Reverse the order of the nodes in the list.

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
Usage Example:

cpp
Copy code
list.reverse(); // List order reversed
Usage
To use this linked list implementation:

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