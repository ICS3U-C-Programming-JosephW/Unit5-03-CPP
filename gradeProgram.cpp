// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: May 13, 2025
/* This program calculates the middle
percentage of a level entered by
the user, based on
https://en.wikipedia.org/wiki/Academic_grading_in_Canada#Ontario. */

/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to style guidelines. */
#include <string>

/* Define a function to calculate
the middle percentage. */
int calcMark(std::string level) {
    /* Initialize the mark
    to use it later. */
    int mark;

    /* Check if the level entered
    by the user was a 4+. */
    if (level == "4+") {
        // Set the mark to 98.
        mark = 98;
    } else if (level == "4") {
        /* Otherwise, check if the
        level entered was a 4. */
        // Set the mark to 91.
        mark = 91;
    } else if (level == "4-") {
        /* Otherwise, check if the
        level entered was a 4-. */
        // Set the mark to 83.
        mark = 83;
    } else if (level == "3+") {
        /* Otherwise, check if the
        level entered was a 3+. */
        // Set the mark to 78.
        mark = 78;
    } else if (level == "3") {
        /* Otherwise, check if the
        level entered was a 3. */
        // Set the mark to 75.
        mark = 75;
    } else if (level == "3-") {
        /* Otherwise, check if the
        level entered was a 3-. */
        // Set the mark to 71.
        mark = 71;
    } else if (level == "2+") {
        /* Otherwise, check if the
        level entered was a 2+. */
        // Set the mark to 68.
        mark = 68;
    } else if (level == "2") {
        /* Otherwise, check if the
        level entered was a 2. */
        // Set the mark to 65.
        mark = 65;
    } else if (level == "2-") {
        /* Otherwise, check if the
        level entered was a 2-. */
        // Set the mark to 61.
        mark = 61;
    } else if (level == "1+") {
        /* Otherwise, check if the
        level entered was a 1+. */
        // Set the mark to 58.
        mark = 58;
    } else if (level == "1") {
        /* Otherwise, check if the
        level entered was a 1. */
        // Set the mark to 55.
        mark = 55;
    } else if (level == "1-") {
        /* Otherwise, check if the
        level entered was a 1-. */
        // Set the mark to 51.
        mark = 51;
    } else if (level == "0") {
        /* Otherwise, check if the
        level entered was a 0. */
        // Set the mark to 25.
        mark = 25;
    } else {
        /* Otherwise, the level 
        entered was not valid. */
        /* Set the mark to -1 to
        indicate it is invalid. */
        mark = -1;
    }
    /* Return the resulting mark
    to be used for display. */
    return mark;
}

// Runs the main function.
int main() {
    // Declare the user level string.
    std::string userLevel;

    // Ask the user for the level.
    std::cout << "\nEnter the level you "
    << "want converted to a percentage: ";
    // Store the level input in the user level variable.
    std::cin >> userLevel;

    /* Assign the middle percentage
    to the mark calculator function
    to get its return value. */
    int middlePercentage = calcMark(userLevel);

    // Check if the user entered an invalid level.
    if (middlePercentage == -1) {
        // Display that their level is not valid.
        std::cout << "\n" << userLevel << " is not a valid level.\n";
    } else {
        // Otherwise, they entered a valid level.
        /* Display the resulting middle
        percentage to the user. */
        std::cout << "\nLevel " << userLevel
        << " has a middle percentage of "
        << middlePercentage << "%.\n";
    }
}
