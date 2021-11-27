/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Cameron Parrish
 */

#include "Header.h"

int main()
{

    std::cout << "Enter an Integer it will be classified as Even or Odd: ";
    int number = 0;

    if (std::cin >> number)
    {
        if ((number % 2) == 0)
            std::cout << "The value " << number << " is Even.";
        else
            std::cout << "The value " << number << " is Odd.";
    }
    else
        std::cout << "The value is invalid.";

    return 0;
}