//Melanie Cruz
//CSCI 135
//indent.cpp
//makes an indent based on the brackets 
#include <iostream>
#include <string>
using namespace std;
//count function
int countChar(string line, char c);
string removeLeadingSpaces(string line);


int main(){
    //takes the string 
    string lines;
    //open section count 
    int open = 0;
    //gets the line
    while (getline(cin, lines)){
        //count the open and closed bracket 
        int opens = countChar( lines, '{');
        int closed = countChar (lines , '}');
        //if its more than zero and it makes a indent
        string no_indent = removeLeadingSpaces(lines);
        if (no_indent[0] == '}'){
            open-= 1;
        }

        for (int i = 0 ; i < open; i ++){
            cout << '\t';
        }
        //after the indent it prints the line 
        cout << no_indent << endl;
        
        //after each line it decreases 
        open +=opens -closed;

    }
    return 0;
}

int countChar(string line, char c){
    int block = 0;
    for (int i = 0 ; i < line.length(); i++){
        if (line[i] == c){
            block ++; 
        }
    }
    return block;
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



