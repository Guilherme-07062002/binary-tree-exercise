#include "node.hpp"
#include "binary_tree.hpp"
#include <iostream>

BinaryTree::BinaryTree()
{
    std::cout << "Building Object..." << std::endl;
}

BinaryTree::~BinaryTree()
{
    std::cout << "Destroying Object..." << std::endl;
}

void BinaryTree::insert(int value)
{
    root = insertRecursive(root, value);
}

void BinaryTree::inOrderTraversal()
{
    std::cout << "In-order traversal: " << std::endl;
    inOrderRecursive(root);
    std::cout << std::endl;
}

void BinaryTree::preOrderTraversal()
{
    std::cout << "Pre-order traversal: " << std::endl;
    preOrderRecursive(root);
    std::cout << std::endl;
}

void BinaryTree::postOrderTraversal()
{
    std::cout << "Post-order traversal: " << std::endl;
    postOrderRecursive(root);
    std::cout << std::endl;
}

int BinaryTree::maxDepth()
{
    return maxDepthRecursive(root);
}