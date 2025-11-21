// EXERCISE 7: Some Counting
// Student: Dan Mihai Arvatescu
// Student ID: 583811
// Date: 09/11/2025
//
// Requirement: Read a list of integers from the user, then display count, sum,
// average, min, max, how many are even/odd, and how many times each number appears.

#include <iostream>
#include <vector>
#include <map>      // keeps a count of how often each number shows up
using namespace std;

int main() {

    // Ask the user how many numbers they want to enter
    int numberCount = 0;
    cout << "How many numbers will you enter? ";
    
    // Validate the number (must be a positive integer)
    if (!(cin >> numberCount) || numberCount <= 0) {
        cout << "Please enter a positive integer for the count." << endl;
        return 1;
    }

    // Create a list (vector) to store the numbers
    vector<int> numbers;
    numbers.reserve(numberCount);  // makes space for the numbers to be stored in the list

    // Ask the user to type the actual numbers
    cout << "Enter " << numberCount << " integers (separated by spaces or Enter):" << endl;

    for (int i = 0; i < numberCount; ++i) {
        int x;
        cin >> x;
        numbers.push_back(x);      // store each entered number
    }

    
    // CALCULATION:
    

    long long sum = 0;               // stores the total sum
    int minVal = numbers[0];         // start by assuming the first number is the smallest
    int maxVal = numbers[0];         // start by assuming the first number is the biggest
    int evens = 0;                   // counts how many numbers are even
    int odds = 0;                    // counts how many numbers are odd

    for (int v : numbers) {
        sum += v;

        // Keeps track of the lowest and highest number so far
        if (v < minVal) minVal = v;
        if (v > maxVal) maxVal = v;

        // checks of the number is even or odd
        if (v % 2 == 0)
            evens++;
        else
            odds++;
    }

    // calculate the average
    double average = static_cast<double>(sum) / numberCount;

    // Checks which numbers repeat and how many times they repeat.
    map<int, int> frequency;

    for (int v : numbers) {
        frequency[v]++;      // each time the same number shows up, it adds 1 more to the freequency 
    }

    
    // DISPLAY RESULTS
   
    cout << "\n--- Results ---" << endl;
    cout << "Total numbers: " << numberCount << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;
    cout << "Even numbers: " << evens << endl;
    cout << "Odd numbers: " << odds << endl;

    // frequency output
    cout << "\nFrequencies (value : count):" << endl;
    for (auto &pair : frequency) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}