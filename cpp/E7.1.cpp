//Melanie Cruz
//CSCI 135
//E7.1
//does the sort function but with pointers now
#include <iostream>
using namespace std;
//inputs the function
void sort2(double* p, double* q);
//main function
int main(){
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
//mentions the sort function 
    sort2(&x,&y);

    return 0;
}
//calls the sort2 function 
void sort2(double* p, double* q){
    //if not in order then changes the values 
    if (*p > *q){
        double newvalue = *p;
        *p = *q;
        *q = newvalue;
    }
}
