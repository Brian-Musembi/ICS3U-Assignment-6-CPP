// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program calculates the surface area of a sphere

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>


float surfaceArea(int radius) {
    // this function calculates the surface area of a sphere
    float surfaceSphere;

    // process
    surfaceSphere = M_PI * (radius * radius) * 4;

    return surfaceSphere;
}

int main() {
    // this function gets user input
    std::cout << "This program calculates the surface area of a sphere."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string radiusInput;
    int radiusInt;
    float surfaceAreaSphere;

    // input
    while (true) {
        try {
            std::cout << "Enter the radius of the sphere (cm): ";
            std::cin >> radiusInput;
            radiusInt = std::stoi(radiusInput);
            std::cout << "" << std::endl;

            if (radiusInt > 0) {
                // call function
                surfaceAreaSphere = surfaceArea(radiusInt);

                std::cout << "Your sphere with the radius of " << radiusInt
                          << " cm has a surface area of " << surfaceAreaSphere
                          << " cm²." << std::endl;

                break;
            } else {
                std::cout << "Please input a positive integer. Try again."
                          << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << radiusInput << " is not a number! Please try again."
                      << std::endl;
        }
    }
}
