//Melanie Cruz
//CSCI 135
//3D-space.cpp
//using the pointer to find the distance between 3 different ppints using a formula
#include <iostream>
//able to use the sqrt function 
#include <cmath>
using namespace std;


//define the class
class Coord3D{
public:
    double x;
    double y;
    double z;
};
//defines the functions 
double length(Coord3D *p){
    //includes the formula 
    // returnt the result 
    return sqrt(p-> x * p ->x + p ->y * p->y + p->z * p->z);
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if (length(p1) < length(p2)){
        return p2;
    }
    return p1;
}


Coord3D* createCoord3D( double x, double y, double z){
    //creates a new point for each time 
    Coord3D *point = new Coord3D;
    point->x = x;
    point-> y= y;
    point-> z = z; 
    return point;
}

void deleteCoord3D(Coord3D *ps){
    //deletes the memory
    delete ps;
    ps = nullptr;
}
//moves the points 
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos->x = ppos ->x + pvel->x * dt;
    ppos->y = ppos ->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt; 
}

int main(){
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);

    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x, y, z);
    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos);
    deleteCoord3D(pvel);
    return 0;
}