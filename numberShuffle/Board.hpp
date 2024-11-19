#ifndef Board_H
#define Board_H

class Board{
public:
    Board();
    Board(int m, int n);
    Board(int** arr, int m, int n);
    ~Board();
    void radomize();
    void getInfo();
    bool valueCorrect(int row, int col) const;
    void display() const;
    void slideUp();
    void slideDown();
    void slideLeft();
    void slideRight();
    void play();

private:
    int numRows;
    int numCols;
    int** panel;
    int emptyCellRow;
    int emptyCellCol;
    int numCorrect;
};
#endif