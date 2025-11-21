// EXERCISE 10: Is It Even?
// Student: Dan Mihai Arvatescu
// Student ID: 583811
// Date: 06/11/2025
// Requirement: Ask the user for a number and say if it is even or odd.



#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    // % (modulus) gives the remainder when dividing by 2
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}