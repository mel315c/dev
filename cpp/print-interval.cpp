//Melanie Cruz
//Course CSCI 135
// Print intervals
// ask the user for the upper and lower limit
// prints out numbers that is the same as the limit until the max number
#include <iostream>
using namespace std;

int main (){
    // lower limit
    int L;
    cout << "Please enter L: ";
    cin >> L;
// upper limit
    int U;
    cout << "Please enter U: ";
    cin >> U;
// i will start with the lower limit
// i will end before the upper limit
    for ( int i = L; i < U; i++) {
        cout << i << endl;
    }
    return 0;
}