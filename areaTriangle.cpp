// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: May 6, 2025
// Program that calculates and displays
// the area of a triangle,
// with user-provided dimensions

#include <iostream>
#include <string>
#include <cstdio>

// Function that calculates and displays the area of a triangle,
// given base and length
void CalcArea(float base, float height) {
    // Calculate area
    float area = base * height * (0.5);
    // Display area [\u00b2 is the unicode sequence for superscript 2]
    printf("The area of the triangle is %.2fcm\u00b2 \n", area);
}

int main() {
    // Initialize variables for base and height
    float base, height;
    // Get base input as string
    printf("Enter the base of the triangle (cm): ");
    std::string baseString;
    std::getline(std::cin, baseString);
    try {
        // Convert the user's input to a float
        base = std::stof(baseString);
        // Get height input as string
        printf("Enter the height of the triangle (cm): ");
        std::string heightString;
        std::getline(std::cin, heightString);
        try {
            // Convert the user's input to a float
            height = std::stof(heightString);
            // Check if height and base are positive
            if ((base > 0) && (height > 0)) {
                // CALL CalcArea()
                CalcArea(base, height);
            } else {
                // Tell the user that the dimensions must be positive
                printf("Base and Height must be greater than 0.\n");
            }
        } catch (std::invalid_argument) {
            // Tell the user that their input wasn't a number
            printf("%s is not a valid number.\n", heightString.c_str());
        }
    } catch(std::invalid_argument) {
        // Tell the user that their input wasn't a number
        printf("%s is not a valid number.\n", baseString.c_str());
    }
}
