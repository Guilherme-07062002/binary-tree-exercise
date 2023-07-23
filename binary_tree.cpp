#include "node.hpp"
#include "binary_tree.hpp"
#include <iostream>

void BinaryTree::insert(int value)
{
    root = insertRecursive(root, value);
}

void BinaryTree::inOrderTraversal()
{
    std::cout << "In-order traversal: ";
    inOrderRecursive(root);
    std::cout << std::endl;
}

void BinaryTree::preOrderTraversal()
{
    std::cout << "Pre-order traversal: ";
    preOrderRecursive(root);
    std::cout << std::endl;
}

void BinaryTree::postOrderTraversal()
{
    std::cout << "Post-order traversal: ";
    postOrderRecursive(root);
    std::cout << std::endl;
}

int BinaryTree::maxDepth()
{
    return maxDepthRecursive(root);
}