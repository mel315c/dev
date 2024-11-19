//Melanie Cruz
//CSCI 135
//E7.16
//Finds the distance between 2 points 
#include <iostream>
//libabry to use the sqrt function
#include <cmath>
using namespace std;

//the class for the points
class Point{
public:
    double x;
    double y;
};

//the distance functions defined 
double distance (Point a, Point b){
    return sqrt(((b.x - a.x) * (b.x -a.x)) + ((b.y - a.y) * (b.y -a.y)));
}

int main(){
    //ask the user for the points 
    Point a, b;
    cout << "Enter a point: ";
    cin >> a.x >> a.y;

    cout << "Enter a point: ";
    cin >> b.x >> b.y;

    //pritns out the distance 
    cout << distance(a, b) << endl;

    return 0;
}