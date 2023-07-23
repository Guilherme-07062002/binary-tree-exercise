#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP
#include <iostream>
#include "node.hpp"

const int capacity = 5;

class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();

    void insert(int value);

    void inOrderTraversal();

    void preOrderTraversal();

    void postOrderTraversal();

    int maxDepth();

private:
    Node *root;

    Node *insertRecursive(Node *current, int value);

    void inOrderRecursive(Node *current);

    void preOrderRecursive(Node *current);

    void postOrderRecursive(Node *current);

    int maxDepthRecursive(Node *current);
};

#endif