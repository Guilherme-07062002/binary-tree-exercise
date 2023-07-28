# Binary Tree

This repository contains a C++ implementation of a binary tree data structure with recursive methods for performing different traversals and obtaining information about the tree's properties.
Binary Tree Traversals

A binary tree is a data structure consisting of nodes, where each node can have up to two child nodes (left and right). Traversing a binary tree means visiting all the nodes in a specific order.

1. In-Order Traversal

    In the in-order traversal, we first recursively traverse the left subtree, then visit the current node (print or perform an operation with the node's value), and finally, we recursively traverse the right subtree. The resulting sequence of nodes in the in-order traversal will be in ascending order (for binary search trees), as we visit the left node first, then the current node, and finally the right node.

2. Pre-Order Traversal

    In the pre-order traversal, we first visit the current node (print or perform an operation with the node's value), then we recursively traverse the left subtree, and finally, we recursively traverse the right subtree. The resulting sequence of nodes in the pre-order traversal will follow the order: current node, left subtree, right subtree.

3. Post-Order Traversal

    In the post-order traversal, we first recursively traverse the left subtree, then recursively traverse the right subtree, and finally, we visit the current node (print or perform an operation with the node's value). The resulting sequence of nodes in the post-order traversal will follow the order: left subtree, right subtree, current node.

## Functionality of the Code

The C++ code provided in this repository implements a binary tree with recursive methods for:

* Inserting Nodes: The code allows inserting new nodes into the binary tree while maintaining the binary search tree property.
* In-Order Traversal: The code provides a method to perform the in-order traversal of the binary tree, printing the nodes in ascending order.
* Pre-Order Traversal: The code provides a method to perform the pre-order traversal of the binary tree, showing the current node before its children.
* Post-Order Traversal: The code provides a method to perform the post-order traversal of the binary tree, showing the current node after its children.
* Max Depth of the Tree: The code calculates and returns the maximum depth (height) of the binary tree.

## How to Use the Code

To use the binary tree implementation, follow these steps:

* Clone the repository to your local machine.
* Make sure you have a C++ compiler (such as g++) installed.
* Run first:

    ```bash
    chmod +x bash.sh
    ```

* And to execute:

    ```bash
    ./bash.sh
    ```

Use the provided methods to perform various operations on the binary tree, such as inserting nodes and performing traversals.

The provided main.cpp file in the repository demonstrates how to interact with the binary tree using a simple interactive menu. The menu allows users to insert nodes, perform different traversals, and see the maximum depth of the tree.

Feel free to modify the code or integrate it into your projects as needed. If you encounter any issues or have questions, please don't hesitate to reach out.
