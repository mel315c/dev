//Melanie Cruz
//Course: CSCI- 135
// Assignment: Smaller
// Finds the smaller integer between two numbers

#include <iostream>
using namespace std;

int main (){
    int num1, num2;
    // ask for the first number
    cout << "Enter the first number: ";
    cin >> num1;
    // ask for the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // does an if statement 
    if (num1 < num2){
        // proves if num1 is smaller than num2
        cout << "The smaller of the two is " << num1 << endl;
    } else {
        // if num2 is smaller than num1
        cout << "The smaller of the two is " << num2 << endl;
    }
    return 0; 
}