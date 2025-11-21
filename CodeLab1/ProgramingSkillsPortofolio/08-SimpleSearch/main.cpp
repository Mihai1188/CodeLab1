// EXERCISE 8: Simple Search
// Student: Dan Mihai Arvatescu
// Student ID: 583811
// Date: 06/11/2025
// Requirement:
// Ask the user for a list of integers and a target number,
// then search for the target and report the index or that it was not found.


#include <iostream>
#include <vector>
using namespace std;

int main() {

    int numberCount = 0;
    cout << "How many numbers will you enter? ";

    // Makes sure the user enters a number bigger than zero (Validate input )
    if (!(cin >> numberCount) || numberCount <= 0) {
        cout << "Please enter a positive integer for the count." << endl;
        return 1;
    }

    vector<int> numbers;
    numbers.reserve(numberCount);

    cout << "Enter " << numberCount << " integers:" << endl;

    // Stores every number that the user types into the list
    for (int i = 0; i < numberCount; ++i) {
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    // Ask for the target number
    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    // Search for the target
    int foundIndex = -1; // -1 = not found
    for (int i = 0; i < numberCount; ++i) {
        if (numbers[i] == target) {
            foundIndex = i;
            break;
        }
    }

    // Output result
    if (foundIndex != -1) {
        cout << "Number " << target << " found at index: " << foundIndex << endl;
    } else {
        cout << "Number " << target << " not found in the list." << endl;
    }

    return 0;
}