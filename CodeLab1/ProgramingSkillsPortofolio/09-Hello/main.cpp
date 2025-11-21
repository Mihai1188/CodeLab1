// EXERCISE 9: Hello
// Student: Dan Mihai Arvatescu
// Student ID: 583811
// Date: 06/11/2025
// Requirement: Ask the user for their name and say hello to them.



#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    cout << "Please enter your name: ";
    getline(cin, name);  // read the whole line, including spaces

    cout << "Hello, " << name << "!" << endl;

    return 0;
}