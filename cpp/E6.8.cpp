//Melanie Cruz
//CSCI 135
//E6.8.cpp
//test whether the size of a and b are the same
// and test if the elements are in the same and in same order
#include <iostream>
using namespace std;
bool equals(int a[], int a_size, int b[], int b_size);

int main(){
    //ask for the size of a and b

    int a_size, b_size;
    cout << "Enter the size of a: ";
    cin >> a_size;

    //ask for the elements of a and b

    int a[a_size];
    cout << "Enter the elements of a[]: ";
    for (int i = 0; i < a_size; i++){
        cin >> a[i];
    }

    cout << "Enter the size of b: ";
    cin >> b_size;

    int b[b_size];
    cout << "Enter the elements of b[]; ";
    for (int i = 0; i < b_size; i++){
        cin >> b[i];
    }

    cout << equals(a, a_size, b, b_size) << endl;
    return 0;
}

bool equals(int a[], int a_size, int b[], int b_size){

    if (a_size != b_size){
        return false;
    }

    //compares both arrays and test whether or not they are the same 
    for (int i = 0; i < a_size; i++){
        if (a[i] != b[i]){
            return false;
        // if the size and the elements are the same then returns true
        }
    }
    return true;
}
