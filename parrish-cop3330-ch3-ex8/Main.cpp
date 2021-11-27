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