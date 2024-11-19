#include <iostream>
using namespace std;

int main (){
    cout << "Enter time (hh:mm) in 12-hour notation (for example, 12:56 AM): ";
    string time;
    getline (cin, time);

    int colon_index = time.find(":");
    int space_index = time.find(" ");
    if ((colon_index == string::npos) || (time.length() != 8)){
        cout << "invalid" << endl;
        return -1;
    }

    string hrs = time.substr(0,colon_index);
    string mins = time.substr(colon_index +1, space_index -1 - colon_index);
    string timeNotation = time.substr(space_index +1);

    int hr = stoi(hrs)
    if ((hr < 1) || (hr > 12)){
        cout << "Invalid" << endl;
        return -1;
    }
    if (timeNotation == "PM"){
        hr = hr + 12;
        cout << hrs;
    }else {
        string current hr 
    }
    if ((mins < "00") || (mins > "59")){
        cout << "Invalid" <<endl;
        return -1;
    }
    cout << "12-hour notation " << time << " in 24-hour notation is " << hrs << ":" << mins << "." << endl;
    return 0;
}