//Name: Melanie Cruz
//Email: melanie.cruz21@myhunter.cuny.edu
//Date: November 28, 2023
// a season greeting based on number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter month (as a number):";
    cin >> n; 
    if ((n < 3) || (n > 11))
    {
        cout << "Happy Winter";
    }
    else if ((n >= 3) && (n < 7))
    {
        cout << "Happy Spring";
    }
    else if ((n >= 7) && (n < 9))
    {
        cout << "Happy Summer";
    }
    else 
    {
        cout << "Happy Fall";
    }
}
