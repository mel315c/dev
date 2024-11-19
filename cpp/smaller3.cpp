// Melanie Cruz
// Course: CSCI 135
// Assignment: smaller3.cpp
// Compares three different integers and picks which one is the smaller one out of the three

#include <iostream>
using namespace std;

int main(){
   // user picks three integers
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;
   // compares the first number
    if ((num1 < num2) && (num1 < num3))
    {
        cout << "The samller of the three is " << num1 << endl;
      // compares the second number
     } else if ((num2 <num1) && (num2 < num3)){
        cout << "The smaller of the three is " << num2 << endl;
      // if the other doesn't work than the last one is the smallest
     } else{
        cout << "The smaller of the three is " << num3 << endl;
     }  
    return 0;
}