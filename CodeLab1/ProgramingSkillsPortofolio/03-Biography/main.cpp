// EXERCISE 1: Biography
// Student:  Mihai Arvatescu
// Student ID: 583811
// Date: 05/11/2025
// Requirement : 
// Ask the user for their personal details (name, age, height, etc.)
// and then display this information back to them in a short formatted biography.
// Use input (cin/getline) and output (cout) to build the final message.


#include <iostream> // This lets me use inpuit and output (cin and cout)
#include <string>  // This lets me use text variables (string type)

using namespace std; // This is so i don`t have to write std before everything

int main() {
    // These are my variables ( storage boxes) for information i`ll ask the user
    string name;
    int age;
    string hobby;
    string dreamJob;

    cout << "Enter your name: ";
    getline(cin, name);  // This allows the reading of a full line, including spaces.

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // clears the extra Enter key from previous line, so the next question dosent get skipped.

    cout << "Enter your favourite hobby: ";
    getline(cin, hobby);

    cout << "Enter your dream job: ";
    getline(cin, dreamJob);

    // This prints every data input by the user
    cout << "\n--- Biography ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Dream Job: " << dreamJob << endl;

    return 0;
}