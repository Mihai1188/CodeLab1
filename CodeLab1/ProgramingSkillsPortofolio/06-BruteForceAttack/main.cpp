// EXERCISE 6: Brute Force Attack
// Student: Dan Mihai Arvatescu
// Student ID: 583811
// Date: 06/11/2025
// Requirement:
// Simulate a simple brute-force program that tries to guess a password using loops.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "3234";    // The password I want to guess
    string attempt = "";         // Stores the current try
    int tries = 0;               // Counts how many tries I have been made

    cout << "Starting brute-force attack..." << endl;

    // Goes through all possible combinations made of up to 4 digits (0000 to 9999)
    for (int i = 0; i <= 9999; i++) {
        // Convert the number i into a 4-digit string (for example, 7 -> "0007")
        string guess = to_string(i);
        while (guess.length() < 4) {
            guess = "0" + guess; // places zeros at the start so every guess has 4 characters
        }

        tries++;           // I am about to make one attempt
        attempt = guess;   // set the attempt to the generated guess

        // Check if the current guess matches the password
        if (attempt == password) {
            cout << "Password found: " << attempt << endl;
            cout << "Attempts made: " << tries << endl;
            break; // stop once I find the right one
        }
    }

    cout << "Brute-force complete." << endl;
    return 0;
}