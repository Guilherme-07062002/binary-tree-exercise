#include "node.hpp"
#include "binary_tree.hpp"
#include <iostream>

BinaryTree::BinaryTree()
{
    BinaryTree::root = nullptr;
    std::cout << "Building Object...\n" << std::endl;
}

BinaryTree::~BinaryTree()
{
    std::cout << "\nDestroying Object..." << std::endl;
}

void BinaryTree::insert(int value)
{
    std::cout << "Inserting " << value << "..." << std::endl;
    BinaryTree::BinaryTree::root = insertRecursive(BinaryTree::root, value);
}

void BinaryTree::inOrderTraversal()
{
    std::cout << "In-order traversal: " << std::endl;
    inOrderRecursive(BinaryTree::root);
    std::cout << std::endl;
}

void BinaryTree::preOrderTraversal()
{
    std::cout << "Pre-order traversal: " << std::endl;
    preOrderRecursive(BinaryTree::root);
    std::cout << std::endl;
}

void BinaryTree::postOrderTraversal()
{
    std::cout << "Post-order traversal: " << std::endl;
    postOrderRecursive(BinaryTree::root);
    std::cout << std::endl;
}

int BinaryTree::maxDepth()
{
    return maxDepthRecursive(BinaryTree::root);
}