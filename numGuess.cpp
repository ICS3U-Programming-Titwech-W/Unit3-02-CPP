// Copyright (c) 2021 Titwech wal All rights reserved.
// Created By: Titwech Wal
// Date: March 30. 2022

// the program asks the user for a number
// between 0-9. then tell them if they are correct

#include <iostream>

int main() {
    // functions for my number
    const int MY_NUMBER = 3;
    int numGuess;

    // get user input
    std::cout << "Guess a number between 0-9:";
    std::cin >> numGuess;
    std::cout << "";

    // process
    if (numGuess == MY_NUMBER) {
        std::cout << "You guessed right!";

    } else {
    std::cout << "You guessed wrong my number is " \
        << MY_NUMBER << "\n";
    }
}
