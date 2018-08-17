//
// Created by CYNGN_Intern on 8/16/18.
//

#ifndef PROJECT_8_19_MAIN_H
#define PROJECT_8_19_MAIN_H

#endif //PROJECT_8_19_MAIN_H

#include<iostream>

using namespace std;

class Gameboard{
    int gameSpace[4][4];

public:
    void setSpace(int r, int c, int val);
    Gameboard();
    void printInfo();
    void fourInRow(int r);
};

void Gameboard::setSpace(int r, int c, int val){
    gameSpace[r-1][c-1]=val;
}

Gameboard::Gameboard() {
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++)
        {
            gameSpace[i][j]=0;
        }
    }
}
void Gameboard::printInfo() {
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout<<gameSpace[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void Gameboard::fourInRow(int r) {
 int flag=1;
 for(int i=0;i<4;i++){
     if(gameSpace[r-1][i]==0)
     flag=0;
 }
 if(flag==0)
     cout<<"Not True";
 else
     cout<<"True";
}

