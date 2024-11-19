#include <iostream>
#include "Board.hpp"
#include <cstdlib>
using namespace std;

int main(){
    cout << "use srand(2) and default constructor" << endl;
    srand(2);
    Board game;
    game.display();
    cout << "number of correct cells: " << game.numCorrect << endl;
    cout << "row of empty cell: " << game.emptyCellRow << endl;
    cout << "column of empty cell: " << game.emptyCellCol << endl;
    cout << "\nUse srand(8) and constructor Board(int m, int n)" << endl;
    srand(8);
    Board game2(3,4);
    game2.display();
    cout << "number of correct cells: " < game2.numCorrect << endl;
    cout << "row of empty cell: " << game2.emptyCellRow << endl;
    cout << "column of empty cell: " << game2.emptyCellCol << endl;
    return 0;
}