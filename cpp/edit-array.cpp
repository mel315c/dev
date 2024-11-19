// Melanie Cruz
//Edit-array.cpp
//Course CSCI135
// prints out an array and the user can pick which index and with wat value
#include <iostream>
using namespace std;

int main() {
    // declares 10 spaces in the array
    int myData[10];
     int index;
     int value;

// prints out all the index
    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
        cout << myData[i] << " ";
    }
    do {
        // allows the user to pick an index and input the value
        cout << "\n" << "Input index: ";
        cin >> index;

        cout << "Input value: ";
        cin >> value;
// the value gets put in 
        if ((0 <= index) && (index < 10)){
            myData[index] = value;
            for (int i = 0; i < 10; i++){
                cout << myData[i] << " ";
            }
        }
        // has to satisifed the condition to repeat
    } while ((0 <= index) && (index < 10));
    cout << "\nIndex out of range. Exit." << endl;
    return 0;
}