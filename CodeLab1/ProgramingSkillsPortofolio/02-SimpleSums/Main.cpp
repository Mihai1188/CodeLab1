// Exercise : Simple Sums
// Student: Dan Mihai Arvatescu
// Student Id: 583811
// Date: 05/11/2025
// Requirement: 
// A program that asks the user for two numbers and outputs their sum.

#include <iostream>
using namespace std;

int main() {
    // Creates 2 variables to store the numbers entered by the user.
    int firstNumber;
    int secondNumber;

    // Ask the user for input
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    // Calculate the sum
    int sum = firstNumber + secondNumber;

    // Display the result
    cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum << endl;

    return 0;
}