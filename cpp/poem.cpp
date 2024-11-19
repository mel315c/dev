//Melanie Cruz
//CSCI 135
//Poem.cpp
//continues to create a poem
#include <iostream>

using namespace std;

//the function pointing to the pointer 
string * createAPoemDynamically() {
    //each input gets put in the string 
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}
int main() {
    //while condition
    while(true) {
    //creates the pointer 
    string *p;
    //goes through the function
    p = createAPoemDynamically();
    // assume that the poem p is not needed at this point
    //deletes the space
    delete p;
    p = nullptr;
    }
}