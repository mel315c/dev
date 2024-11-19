//Melanie Cruz
//CSCI 135
//bad-code.cpp
//removes any spaces and return on how it should be 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//name a function
string removeLeadingSpaces(string line);

int main(){
    //gets the line 
    string lines;
    //goes through each line 
    while(getline(cin,lines)){
        cout << removeLeadingSpaces(lines) << endl;
    }
    return 0;
}
string removeLeadingSpaces(string line){
    //makes a new line 
    string newline = "";
    bool nonspace = false;
    //checks through every characters 
    for (int i = 0; i < line.length(); i++){
        //if the character is a space

        if (!nonspace && isspace(line[i])){
            nonspace = false;
        } else {
            nonspace = true;
            newline += line[i];
        }
    }
    return newline;     
}