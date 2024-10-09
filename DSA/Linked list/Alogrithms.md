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
```
