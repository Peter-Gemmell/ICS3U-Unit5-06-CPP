// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <iostream>
#include <cmath>

float RoundNumber(float *inputNumber, const int &roundedBy) {
    // function adds 1, by reference
    float temp;

    temp = ((*inputNumber * (pow(10, roundedBy))) + 0.5);
    temp = (static_cast<int>(temp));
    temp = (temp / (pow(10, roundedBy)));

    *inputNumber = temp;
}

main() {
    // this function gets a number and calls the AddOne function
    std::string askUserNumber;
    std::string askRound;
    float inputNumber;
    int roundedBy;
    int userNumber;
    float roundedNumber;

    // input
    std::cout << "Enter the number you want to round : ";
    std::cin >> askUserNumber;
    std::cout << "Enter how many decimal places you want to round by : ";
    std::cin >> askRound;

    try {
        inputNumber = std::stof(askUserNumber);
        roundedBy = std::stoi(askRound);
        // call functions
        RoundNumber(&inputNumber, roundedBy);
        std::cout << "\nThe rounded number is " << inputNumber;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid number entered, please try again." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
