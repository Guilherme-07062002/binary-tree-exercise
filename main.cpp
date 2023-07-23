#include <iostream>
#include "binary_tree.hpp"

int main()
{
    BinaryTree binaryTree;
    
    binaryTree.insert(5);
    binaryTree.insert(3);
    binaryTree.insert(7);
    binaryTree.insert(2);
    binaryTree.insert(4);
    binaryTree.insert(6);
    binaryTree.insert(8);

    binaryTree.inOrderTraversal();

    binaryTree.preOrderTraversal();

    binaryTree.postOrderTraversal();

    std::cout << "Binary tree depth: " << binaryTree.maxDepth() << std::endl;

    return 0;
}