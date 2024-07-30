# Linked List Implementation in C++

This repository contains a simple implementation of a singly linked list in C++ with basic operations such as appending nodes, adding nodes at a specific location, and adding nodes after a specific location.

## Features

- Append a node to the linked list
- Add a node at a specific location
- Add a node after a specific location
- Calculate the length of the linked list
- Print the elements of the linked list

## Code Overview

The `Node` class represents a node in the linked list, containing data and a pointer to the next node.

The `Methods` class provides functionalities to manipulate the linked list, including appending nodes, adding nodes at a specific location, and adding nodes after a specific location. It also includes methods to calculate the length of the linked list and to print its elements.

### Node Class

```cpp
class Node {
public:
    int data;
    Node* link;
};
