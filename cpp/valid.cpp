// Melanie Cruz 
// Course: CSCI 135
// Valid.cpp Assignment
// takes a number and it has to be between 0 and 100

#include <iostream>
using namespace std;

int main () {
    // number bariable 
    int num;
    cout << "Please enter an integer: ";
    cin >> num;
    // this is a condition
    // the condition is if the number is less than 0 or more than 100 then it has to re enter
    // untill the condition isn't satisified then it would continue 
    while ((num <= 0) || (num >= 100)){
        cout << "Please re-enter: ";
        cin >> num;
    }
    // when it pass through the num gets nuultiply by itself
    num = num * num ;
    cout << "Number squared is: " << num << endl;
    return 0;
}