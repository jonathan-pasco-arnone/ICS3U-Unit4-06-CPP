// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program displays every possible rgb color code

#include <iostream>

int main() {
    // This function displays every possible rgb color code

    std::string nothing;
    int counter1 = -1;
    int counter2 = -1;
    int counter3 = -1;

    std::cout << "" << std::endl;
    std::cout << "This Program Prints every possible rgb color." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Input anything to proceed: ";
    std::cin >> nothing;

    while (counter1 < 0) {
        counter1 = counter1 + 1;
        while (counter2 < 1) {
            counter2 = counter2 + 1;
            while (counter3 < 255) {
                counter3 = counter3 + 1;
                std::cout << "RGB(" << counter1 << "," << counter2 << ","
                      << counter3 << ")" << std::endl;
            }
            counter3 = 0;
        }
        counter2 = 0;
    }
}
