#include <iostream>
#include "binary_tree.hpp"

int main()
{
    BinaryTree binaryTree;
    int option;

    do
    {
        std::cout << "----------------------\n";
        std::cout << "       MENU\n";
        std::cout << "----------------------\n";
        std::cout << "1. Insert node\n";
        std::cout << "2. Perform in-order transversal\n";
        std::cout << "3. Perform pre-order transversal\n";
        std::cout << "4. Perform post-order transversal\n";
        std::cout << "5. Show tree depth\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose a option: ";
        std::cin >> option;
        std::cout << "----------------------\n";

        switch (option)
        {
        case 1:
            int number;
            std::cout << "Enter a number to insert: ";
            std::cin >> number;
            binaryTree.insert(number);
            break;
        case 2:
            binaryTree.inOrderTraversal();
            break;
        case 3:
            binaryTree.preOrderTraversal();
            break;
        case 4:
            binaryTree.postOrderTraversal();
            break;
        case 5:
            std::cout << "Binary tree depth: " << binaryTree.maxDepth() << std::endl;
            break;
        }
    } while (option != 0);

    std::cout << "Bye." << std::endl;

    return 0;
}