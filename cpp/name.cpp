// Melanie Cruz
// course: CSCI 135
//Assignment: name.cpp
// supposed to take 3 names and out them in their own lines
#include <iostream>
using namespace std;

int main () {
    // has a name variable for the 3 names
    string name1, name2, name3;
// ask for 3 names
    cout << "Enter the first name: \n";
    // saves the name
    cin >> name1;
    cout << "Enter the second name: \n";
    cin >> name2;
    cout << "Enter the third name: \n";
    cin >> name3;

// prints out each of the names 
    cout << name1 << "\n" << name2 << "\n" << name3 << endl;
// tells the fuction is finish
    return 0;
}