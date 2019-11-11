// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program will convert temprature from Celsius to Fahrenheit

#include <iostream>

int main() {
    // This function will convert temprature from Celsius to Fahrenheit
    std::string tempc;
    int tempf;
    int numCheck;
    // input
    std::cout << "Temperature in Celsius : ";
    std::cin >> tempc;
    std::cout << "" << std::endl;
    // process & output
    try {
        numCheck = std::stoi(tempc);
        tempf = (numCheck * 9/5) + 32;
        std::cout << "Temperature in Fahrenheit = " << "(" << numCheck
                  << " * 9/5 )" <<"+ 32" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Temperature in Fahrenheit is :" << tempf;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Number";
        std::cout << " ";
      }
}
