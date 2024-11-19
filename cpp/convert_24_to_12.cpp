//Melanie Cruz 
//CSCI 135
//coverting 24 to 12 time
#include <iostream>
#include <string>
using namespace std;

int main (){
    // inputs the military time 
    string time;
    cout << "Enter time (hh:mm) in 24-hour notation (for example, 12:56): ";
    cin >> time;

    // finds the colon in order to separate the hrs and the mins 
    int colon_index = time.find(":");
    if ((colon_index == string::npos) || (time.length() != 5)){
        cout << "invalid" << endl;
        return -1;
    }
// finds the hr and the mins 
    string hr = time.substr(0, colon_index);
    string min = time.substr(colon_index +1);
// turns it into a number intead of a string
    int hrs = stoi (hr);

    if ((hrs < 0) || (hrs > 24)){
        cout << "invalid" << endl;
        return -1;
    }
    // puts am and pm based on the hr 
    string timeNotation;
    if (hrs < 12){
        timeNotation = " AM";
    } else {
        timeNotation = " PM";
    }

    if ((min < "00") || (min > "59")){
        cout << "invalid" << endl;
        return -1;
    }
    // turns the 24 hr into 12 hrs 
    string hrsTime[] = {"12","1","2","3","4","5","6","7","8","9","10","11","12","1","2","3","4","5","6","7","8","9","10","11"};
    string currentTime = hrsTime[hrs];
    
    cout << "24-hour notation " << time << " in 12-hour notation is " << currentTime << ":" << min << timeNotation << endl;
    return 0;

}