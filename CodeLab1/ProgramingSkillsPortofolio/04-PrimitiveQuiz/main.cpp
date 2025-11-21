// EXERCISE 10: Is It Even?
// Student: Dan Mihai Arvatescu
// Student ID: 583811
// Date: 08/11/2025
// Requirement: Ask the user a series of simple questions about primitive data
// types (such as int, float, char, bool). Read the user's answers and display
// whether each answer is correct or incorrect.

#include <iostream>
using namespace std;

int main() {
    // Simple quiz about primitive data types

    cout << "Welcome to the Primitive Data Types Quiz!" << endl;
    cout << "Answer the following questions by inserting the correct letter (a, b, c, or d)." << endl;
    cout << "--------------------------------------------------------------" << endl;

    int score = 0; // keeps track of how many answers are correct
    char answer;   // stores the user's answer

    // Question 1
    cout << "\n1. Which data type is used to store a whole number?" << endl;
    cout << "a) double\nb) int\nc) char\nd) string" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect. The correct answer is b) int.\n";
    }

    // Question 2
    cout << "\n2. Which data type is used to store a single character?" << endl;
    cout << "a) char\nb) string\nc) float\nd) bool" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'a' || answer == 'A') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect. The correct answer is a) char.\n";
    }

    // Question 3
    cout << "\n3. Which data type can store true or false values?" << endl;
    cout << "a) int\nb) bool\nc) double\nd) char" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect. The correct answer is b) bool.\n";
    }

    // Final score
    cout << "\nYou got " << score << " out of 3 correct!" << endl;

    return 0;
}