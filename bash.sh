#!/bin/bash

g++ -c main.cpp binary_tree.cpp recursive.cpp

g++ main.o binary_tree.o recursive.o -o program

./program