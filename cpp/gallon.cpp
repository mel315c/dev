//Melanie Cruz
//CSCI 135
//gallon.cpp
//gets the input of each task 
#include <iostream>
using namespace std;

int main (){
    // makes a variable of each thing 
    double gallons, mpg, price;

    cout << "Enter the number of gallons of gas in tank: ";
    cin >> gallons;

    cout << "Input fuel efficany in miles per gallon: ";
    cin >> mpg;

    cout << "Enter the price of gas per gallon: ";
    cin >> price;

// finds the cost of the price per 100 miles 
    double cost;
    cost = (100/mpg) * price;
// finds the distance the car is able to travel 
    double distance;
    distance = gallons * mpg;
// prints out all the calculations necesaasry 
    cout << "The cost per 100 miles is $" << cost << endl;
    cout << "The car can go " << distance << "mile/s with the gas in the tank." << endl;
    return 0;
}