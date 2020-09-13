// Weekly 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number = 1;
    int task = 0;
    
    std::cout << "choose task to review: ";
    std::cin >> task;

    if (task == 1) {
        while (number < 101) {
            std::cout << number << " ";
            if (number % 10 == 0) {
                std::cout << "\n";
            }
            number++;
        }
        for (int number2{ 1 }; number2 < 101; ++number2) {
            std::cout << number2 << " ";
            if (number2 % 10 == 0) {
                std::cout << "\n";
            }
        }
    }
    else if (task == 2) {
        for (int down{ 100 }; down > 0; --down) {
            std::cout << down << " ";
            if (down % 10 == 0 && down < 100) {
                std::cout << "\n";
            }
        }
    }
    else if (task == 3) {
        int steps = 5;
        while (steps < 51) {
            std::cout << steps << " ";

        }
    }
}

