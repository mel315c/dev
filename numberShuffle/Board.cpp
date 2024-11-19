#include "Board.hpp"
#include <cstdlib>
Board::Board(){
    numRows = 3;
    numCols = 3;
    
    panel = new int*[numRows];
    for (int row = 0; row < numRows; row++){
        panel[row]= new int[numCols];
    }
        for (int row = 0; row < numRows; row++){
            for (int col = 0 ; col < numCols; col++)
            panel[row][col] = row *numCols + col+1;
        
    }
}

Board::~Board(){
    for( int row = 0 ; row < numRows; row++){
        delete[] panel[row];
        panel[row] = nullptr;
    }
    delete[] panel;
    panel = nullptr;

}
Board::Board(int m, int n){
    if(m >=2 && n >= 2){
        numCols = n;
        numRows = m;
    } else{
        numCols = 3;
        numRows = 3;
    }
    panel = new int*[numRows];
    for (int row = 0; row < numRows; row++){
        panel[row] = new int[numCols];
    }
    for (int row = 0; row < numRows; row++){
        for (int col = 0; col < numCols; col++){
            panel[row][col] = row*numCols + col + 1;
        }
    }


}
Board::Board(int** arr, int m, int n){
    if( m >=2 && n >= 2){
        numRows = m;
        numCols = n;
    } else{
        numRows =3;
        numCols = 3;
    }

    panel = new int*[numRows];
    for (int row = 0; row < numRows; row++){
        panel[row] = new int[numCols];
    }
    for (int row = 0; row < numRows; row++){
        for (int col = 0; col < numCols; col++){
            panel[row][col] = arr[row][col];
        }
    }
}

void Board::radomize(){
    int arr[numRows*numCols -1];
    for (int i = 0; i < numRows*numCols; i++){
        arr[i];
        int currLastIdx = arr[numRows*numCols];
        while (currLastIdx > 0){
            int k = rand()%currLastIdx;
            int temp = k;
            k = currLastIdx;
            currLastIdx = k;
            currLastIdx--;
        }
    }


}

void Board::getInfo(){

}
bool Board::valueCorrect(int row, int col) const{

}
void Board::display() const{

}