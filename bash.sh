#!/bin/bash

g++ -c main.cpp
g++ -c binary_tree.cpp

g++ main.o binary_tree.o -o program

./program
