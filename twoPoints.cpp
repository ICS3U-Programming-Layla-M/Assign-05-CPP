// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: June 5, 2021
// This program asks the user to input two points and displays the midpoint,
// distance and line equation of those two points

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

float midpointX(float x1, float x2) {
    // calculates the midpoint of the x-coordinates
    float midpointX = (x1 + x2) / 2.0;
    return midpointX;
}


float midpointY(float y1, float y2) {
    // calculates the midpoint of the y-coordinates
    float midpointY = (y1 + y2) / 2.0;
    return midpointY;
}


float distance(float x1, float y1, float x2, float y2) {
    // calculates the distance of two points
    float distance = sqrt((pow((x2-x1), 2)) + (pow((y2-y1), 2)));
    return distance;
}


float lineMValue(float x1, float y1, float x2, float y2) {
    // calculates the m-value for the line equation
    float mValue = ((y2-y1) / (x2-x1));
    return mValue;
}


float lineBValue(float x1, float y1, float m) {
    // calculates the b-value for the line equation
    float bValue = (y1 - (x1 * m));
    return bValue;
}


int main() {
    // declare local variables
    std::string userPoint1xString, userPoint1yString, userPoint2xString;
    std::string userPoint2yString;
    float userPoint1xFloat, userPoint1yFloat, userPoint2xFloat;
    float userPoint2yFloat, midpointResultX, midpointResultY, distanceResult;
    float lineResultM, lineResultB;

    // greet the user
    std::cout << "This program tells you the midpoint, distance and line ";
    std::cout << "equation of two points.\n";
    std::cout << "\n";

    while (true) {
        // get the x-coordinate of the first point
        std::cout << "Enter the x-coordinate of the first point: ";
        std::cin >> userPoint1xString;

        try {
            // check that it is a number
            userPoint1xFloat = std::stof(userPoint1xString);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userPoint1xString << " is not a number, try again.\n";
        }
    }
    std::cout << "\n";

    while (true) {
        // get the y-coordinate of the first point
        std::cout << "Enter the y-coordinate of the first point: ";
        std::cin >> userPoint1yString;

        try {
            // check that it is a number
            userPoint1yFloat = std::stof(userPoint1yString);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userPoint1yString << " is not a number, try again.\n";
        }
    }
    std::cout << "\n";

    while (true) {
        // get the x-coordinate of the second point
        std::cout << "Enter the x-coordinate of the second point: ";
        std::cin >> userPoint2xString;

        try {
            // check that it is a number
            userPoint2xFloat = std::stof(userPoint2xString);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userPoint2xString << " is not a number, try again.\n";
        }
    }
    std::cout << "\n";

    while (true) {
        // get the y-coordinate of the second point
        std::cout << "Enter the y-coordinate of the second point: ";
        std::cin >> userPoint2yString;

        try {
            // check that it is a number
            userPoint2yFloat = std::stof(userPoint2yString);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userPoint2yString << " is not a number, try again.\n";
        }
    }
    std::cout << "\n";

    // call functions to calculate the midpoint, distance and line equation
    midpointResultX = midpointX(userPoint1xFloat, userPoint2xFloat);
    midpointResultY = midpointY(userPoint1yFloat, userPoint2yFloat);
    distanceResult = distance(userPoint1xFloat, userPoint1yFloat,
                              userPoint2xFloat, userPoint2yFloat);
    lineResultM = lineMValue(userPoint1xFloat, userPoint1yFloat,
                             userPoint2xFloat, userPoint2yFloat);
    lineResultB = lineBValue(userPoint1xFloat, userPoint1yFloat, lineResultM);

    // display the midpoint
    std::cout << "The midpoint of those two points is (" << std::fixed <<
    std::setprecision(4) << std::setfill('0') << midpointResultX << ", " <<
    std::fixed << std::setprecision(4) << std::setfill('0') <<
    midpointResultY << ").\n";

    // display the distance
    std::cout << "The distance between those two points is " << std::fixed <<
    std::setprecision(4) << std::setfill('0') << distanceResult << " units.\n";

    // display the line equation
    std::cout << "The line equation of those two points is: y = " <<
    std::fixed << std::setprecision(4) << std::setfill('0') << lineResultM <<
    " * x + " << std::fixed << std::setprecision(4) << std::setfill('0') <<
    lineResultB << ".\n";
}
