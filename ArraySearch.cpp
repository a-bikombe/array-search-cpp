/*
Student Name: Arianna Bikombe
Date: April 22, 2021
Course: CSCI175N
Lab Assignment: Lab10-01ArraySearch
Project Name: Array Search
File Name: Lab10-01ArraySearch.cpp
Description: Prompts user to enter a number and checks if it is valid
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
using namespace std;

// Constant for the size of accounts[] array
const int ARRAY_SIZE = 18;

// Function prototypes
void myName();

int main() {

    // Local variables
    long number, index = 0, position = -1;
    bool found = false;

    myName();

    // Array of account numbers
    long accounts[ARRAY_SIZE] = { 5658845, 4520125, 7895122,
                          8777541, 8451277, 1302850,
                          8080152, 4562555, 5552012,
                          5050552, 7825877, 1250255,
                          1005231, 6545231, 3852085,
                          7576651, 7881200, 4581002 };

    // Prompt user for input
    cout << "Please enter a 7-digit account number: ";
    cin >> number;

    cout << endl;

    // linear search
    while (found == false && index < ARRAY_SIZE) {
        if (accounts[index] == number) {
            found = true;
            position = index;
        } else
            index++;
    }
    
    // Display data.
    if (found == true)
        cout << "The number you entered is valid." << endl << endl;
    else
        cout << "The number you entered is invalid." << endl << endl;

    // Pauses system
    system("pause");

    return 0;

}

//*************************************************
// The myName function outputs my name, course, & *
// Program #, and a blank line as typical for all *
// programs.                                      *
//*************************************************

void myName() {

    // Print out your name and course
    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n";
    cout << "Lab 10_01 Array Search\n" << endl;

}


/*

test 1

Arianna Bikombe
CSCI175N
Lab 10_01 Array Search

Please enter a 7-digit account number: 8451277

The number you entered is valid.

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N
Lab 10_01 Array Search

Please enter a 7-digit account number: 0000001

The number you entered is invalid.

Press any key to continue . . .

*/