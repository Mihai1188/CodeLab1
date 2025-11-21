// EXERCISE 5: Days of the Month
// Student: Dan Mihai Arvatescu
// Student ID: 583811
// Date: 05/11/2025
// Requirement: Ask the user for a month number (1–12) and show how many days
// that month has. Use selection (if/else or switch) to decide the result.
// Special case: February has 28 days (ignore leap years for this exercise).




#include <iostream>
using namespace std;

int main() {
    int month;  // variable to store the month number

    cout << "Enter the number of a month (1-12): ";
    cin >> month;

    cout << endl; // just a blank line for readability

    // Decide how many days are in that month
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        cout << "This month has 31 days." << endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "This month has 30 days." << endl;
    }
    else if (month == 2) {
        cout << "February usually has 28 days (29 in leap years)." << endl;
    }
    else {
        cout << "That’s not a valid month number!" << endl;
    }

    return 0;
}
