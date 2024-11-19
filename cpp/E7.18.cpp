//Melanie Cruz
//CSCI 135
//E7.18
//Finds the perimeter of the triangle based on the 3 points 
#include <iostream>
//library to use the sqrt function
#include <cmath>
using namespace std;
//class of the points to have x and y
class Point{
public:
    double x;
    double y;
};

struct Triangle{
    Point a;
    Point b;
    Point c;
};


double distance (Point a, Point b){
    //formula to finds the distance 
    return sqrt(((b.x - a.x) * (b.x -a.x)) + ((b.y - a.y) * (b.y -a.y)));
}

//perimeter function
double perimeter (Triangle t){
    //finds the distance of each point
    //which is the side of the triangle 
    double side1 = distance(t.a, t.b);
    double side2 = distance(t.b, t.c);
    double side3 = distance(t.a, t.c);
    //adds up all the sides to find the perimeter
    return side1 +side2 + side3;
}


int main(){
    //ask for 3 points 
    Triangle t;
    cout << "Enter a point: ";
    cin >> t.a.x >> t.a.y;

    cout << "Enter a point: ";
    cin >> t.b.x >> t.b.y;

    cout << "Enter a point: ";
    cin >> t.c.x >> t.c.y;
    //prints out the perimeter 
    cout << perimeter(t) << endl;


    return 0;
}