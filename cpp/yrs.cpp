//Name: Melanie Cruz
//Email: melanie.cruz21@myhunter.cuny.edu
//Date: November 28, 2023
#include <iostream>
using namespace std;

int main()
{
    int yr;
    cout << "Enter year: ";
    cin >> yr; 
    while (yr > 2018)
    {
        cout << "Year must be 2018 or earlier\n";
        cout << "Enter year: ";
        cin >> yr;

    }
    cout << "You entered: " << yr; 
    return 0;
}