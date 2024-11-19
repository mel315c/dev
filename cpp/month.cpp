// Melanie Cruz
// Course: CSCI 135
// Assignment: month.cpp
// Puts out how many days in a month based on the year
#include <iostream>
using namespace std;

int main (){
    //Ask user for the month and year
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    // Goes into if statement based on the number the user puts
    int days = 31;

    if (month == 2){
        // checks the year for feburary
        if (year % 4){
            days = 28;
        } else if (year % 100){
            days = 29;
        } else if (year % 400){
            days = 28;
        } else {
            days = 29;
        }
    // checks the other months that have 30 days
    } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)){
        days = 30;
    } else {
        days = 31;
    }
    // ouputs the days of the month based on the year
    
    cout << days << " days" << endl;
    return 0;
}
