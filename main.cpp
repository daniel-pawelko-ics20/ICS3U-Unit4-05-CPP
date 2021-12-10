// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Dec 2021
// Continue keyword

#include <iostream>

int main() {
    // main function for creating for loop program
    // define variables
    int total_nums;
    int temp_num;
    int total_sum = 0;

    // input
    std::cout << "Total numbers to add: " << std::endl;
    std::cin >> total_nums;

    // process/output
    for (int i = 0; i < total_nums; i++) {
        std::cout << "Enter a number to add: " << std::endl;
        std::cin >> temp_num;
        if (temp_num <= 0) {
            continue;
        }
        total_sum += temp_num;
    }

    std::cout << "Sum of positive numbers is = " << total_sum << std::endl;

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
