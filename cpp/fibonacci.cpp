//Melanie Cruz
//Course: CSCI
//fiboacci.cpp
// its suposed to use the value from the last 2 index from the array

#include <iostream>
using namespace std;

int main (){
// makes a space of 60 index
    int fib[60];
    // the first index is 0
    fib[0] = 0;
    cout << fib[0] << "\n";
// the secondd index is 1
    fib[1]= 1;
    cout << fib[1] << "\n";

// prints out all the numbers until reaching 60
    for (int i = 2; i < 60; i++){
        // uses the formula to add numbers inside the array
        fib[i] = fib[i-1] + fib[i-2];
        // each one will print out the value in each index 
        cout << fib[i] << endl;
    }
    return 0;
}