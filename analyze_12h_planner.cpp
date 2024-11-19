//Melanie Cruz
//CSCI 135
//October 5,2024
//analyze_12h_planner.cpp
//uses a csv planner and prints out each section based on the priority
// finds the difference of the interval and prints out the time
// calcualates the total time 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void hours_minutes_in_24h(string str, int& hours, int& minutes);
int duration(string str);
#ifndef UNIT_TEST
int main(){
    // enter the file
    string file, priority1;
    cout << "Enter file name: ";
    getline(cin,file);
// names the principle they want of 1 or 2
    cout << "Enter the priority: ";
    cin >> priority1;

    ifstream fin(file);
    if (fin.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);        
    }
    string junk;
    getline (fin, junk);
    string time, activity, priority;
    int totalTime = 0 ;
    while(getline(fin, time,',')){
        getline(fin, activity,',');
        getline(fin, priority);
        if (priority1 == priority){
            totalTime += duration(time);
            cout << time << "," << activity << ", " << duration(time)/60 << " hours and " << duration(time) % 60 << " minutes" << endl;
        }
    }
    fin.close();
    cout << "Total duration: " << totalTime/60 << " hours and " << totalTime%60 << " minutes" << endl;

    return 0;
}
#endif
// converts the time to 24 hrs 
void hours_minutes_in_24h(string str, int& hours, int& minutes){
    int space_index = str.find(" ");
    int colon_index = str.find(":");
    hours = stoi(str.substr(0, colon_index));
    minutes = stoi(str.substr(colon_index +1, space_index- colon_index -1));
    string timenotation = str.substr(space_index + 1);
    if (timenotation == "AM"){
        if (hours == 12){
            hours = 0;
        }
    } else if (timenotation == "PM"){
        if (hours != 12){
            hours += 12;
        }
    }
}

int duration(string str){
    int dash = str.find("-");

    string str1 = str.substr(0, dash);
    string str2 = str.substr(dash+1);
// separates each time into 2 different times 
    int hours1, hours2, minutes1, minutes2;
//uses this function to convert it to 24 hrs 
    hours_minutes_in_24h(str1, hours1, minutes1);
    hours_minutes_in_24h(str2, hours2, minutes2);
// finds the total mins 
    int diff_hrs = (hours2 - hours1) * 60;
    int diff_mins= minutes2 - minutes1;
    int total_mins = diff_hrs + diff_mins;
    return total_mins;
}