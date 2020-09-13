// Weekly 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char repeat = 'n';

    do {
        int number = 1;
        int task = 0;

        std::cout << "choose task to review:(1 to 6) ";
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
                steps = steps + 5;
            }
        }
        else if (task == 4) {
            for (int steps{ 5 }; steps < 51; steps = steps + 5) {
                std::cout << steps << " ";
            }
        }
        else if (task == 5) {
            int steps = 5;
            do {
                std::cout << steps << " ";
                steps = steps + 5;
            } while (steps < 51);
        }
        else if (task == 6) {
            char grade = 'A';
            std::cout << "which grade do you want in programming 1?(A to F) ";
            std::cin >> grade;
            system("cls");


            //intentional fall-through behaviour in switch below
            switch (grade) {
            case 'a':
            case 'A':
                std::cout << "Outstanding";
                break;
            case 'b':
            case 'B':
                std::cout << "Very good";
                break;
            case 'c':
            case 'C':
                std::cout << "Good";
                break;
            case 'd':
            case 'D':
                std::cout << "Some flaws";
                break;
            case 'e':
            case 'E':
                std::cout << "Not very good";
                break;
            case 'f':
            case 'F':
                std::cout << "Fail";
                break;
            default:
                std::cout << "That is not a grade!";
                break;
            }
        }
        std::cout << "\nType y to review another task or n to end program: ";
        std::cin >> repeat;
        system("cls");
    } while (repeat == 'y' || repeat == 'Y');
}

