// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program with proper style

#include <iostream>
#include <cmath>

int main() {
    // This function calculates the area and perimetre of a rectangle
    int length;
    int width;
    int area;
    int perimetre;

    // input
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // process
    area = length * width;
    perimetre = 2 * (length + width);

    // output
    std::cout << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "Perimetre is " << perimetre << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
