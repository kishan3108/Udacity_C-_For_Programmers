//
// Created by CYNGN_Intern on 8/16/18.
//
#include "mainClasses.cpp"
int raw=2;
int column=2;
TicTacToe::TicTacToe() {
    for(int i=0; i<raw; i++){
        for(int j=0; j<column; j++){
            gameBoard[i][j]='A';
        }
    }
}

void TicTacToe::finalShape() {
    for(int i=0; i<raw; i++){
        for(int j=0; j<column; j++)
        {
            cout<<gameBoard[i][j]<<"   ";
        }
        cout<<endl;
    }
}

void TicTacToe::player1Turn(int r, int c) {
    //cout<<"Player 1 Turn"<<" ";
    gameBoard[r-1][c-1]='O';
}

void TicTacToe::player2Turn(int r, int c) {
    //cout<<"Player 2 Turn"<<" ";
    gameBoard[r-1][c-1]='X';
}

void TicTacToe::winner() {
    int flag=0;
    for(int i=0; i<raw; i++){
        for(int j=0; j<column;j++) {
            if (gameBoard[i][j] == 'O'){
                flag=1;
        }
            else {
                flag = 0;
                break;
            }
        }
    }
    if(flag==0)
        cout<<"Match is Draw"<<endl;
    else if(flag==1)
        cout<<"Player 1 win"<<endl;
    else if(flag ==2)
        cout<<"Player 2 win"<<endl;
}