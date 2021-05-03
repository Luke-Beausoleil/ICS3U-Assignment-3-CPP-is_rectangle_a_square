// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program checks if a rectangle is a square using length and width
//      values inputted by user

#include <iostream>

int main() {
    // this function checks if the rectangle is a square

    // variables
    float length;
    float width;

    // input
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // process & output
    if (length == width) {
        std::cout << "\nThis rectangle is a square." << std::endl;
    } else {
        std::cout << "\nThis rectangle is not a square." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
