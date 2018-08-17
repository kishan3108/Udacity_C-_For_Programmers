//
// Created by CYNGN_Intern on 8/16/18.
//
#include <iostream>
#include <string>

using namespace std;

class TicTacToe{
    int r;
    int c;
    char data;
    char gameBoard[4][4];

public:
    TicTacToe();
    void player1Turn(int r, int c);
    void player2Turn(int r, int c);
    void finalShape();
    void winner();
};
