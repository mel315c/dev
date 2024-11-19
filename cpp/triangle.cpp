// Name: Melanie Cruz
// Email: melanie.cruz21@myhunter.cunt.edu
// Date: November 28, 2023
// makes triangles
#include <iostream>
using namespace std;

int main(){
    int lines;
    cout << "Enter a number:";
    cin >> lines;
    for (int i = 1; i <= lines; i++){
        for (int j = 0; j< i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}