#include "node.hpp"
#include "binary_tree.hpp"
#include <iostream>

Node *BinaryTree::insertRecursive(Node *current, int value)
{
    if (current == nullptr)
    {
        return new Node(value);
    }

    if (value < current->data)
    {
        current->left = insertRecursive(current->left, value);
    }
    else if (value > current->data)
    {
        current->right = insertRecursive(current->right, value);
    }

    return current;
}

void BinaryTree::inOrderRecursive(Node *current)
{
    if (current == nullptr)
    {
        return;
    }

    inOrderRecursive(current->left);
    std::cout << current->data << " ";
    inOrderRecursive(current->right);
}

void BinaryTree::preOrderRecursive(Node *current)
{
    if (current == nullptr)
    {
        return;
    }

    std::cout << current->data << " ";
    preOrderRecursive(current->left);
    preOrderRecursive(current->right);
}

void BinaryTree::postOrderRecursive(Node *current)
{
    if (current == nullptr)
    {
        return;
    }

    postOrderRecursive(current->left);
    postOrderRecursive(current->right);
    std::cout << current->data << " ";
}

int BinaryTree::maxDepthRecursive(Node *current)
{
    if (current == nullptr)
    {
        return 0;
    }

    int leftDepth = maxDepthRecursive(current->left);
    int rightDepth = maxDepthRecursive(current->right);

    return std::max(leftDepth, rightDepth) + 1;
}
