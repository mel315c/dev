// Melanie Cruz
// Course CSCI 135
// Assignment Leap.cpp
// Determines the year is a common year or a leap year
#include <iostream>
using namespace std;

int main(){
   // User inputs year
    int year;
    cout << "Enter year: ";
    cin >> year;

// Determines the year is able to be divided by 4
    if (year % 4){
        cout << "Common year" << endl;
    // Determines if the year is able to be divided by 100
    } else if (year % 100){
        cout << "Leap year" << endl;
    // Determines if the year is able to be divided by 400
    } else if (year % 400){
        cout << "Common year" << endl;
    // If nothing else works then it is a leap year
    } else {
        cout << "Leap year" << endl;
    }
    return 0;
}
