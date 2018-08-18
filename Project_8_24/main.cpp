#include "mainFunctions.cpp"

int main() {
    int rw=0, cl=0;
    TicTacToe game1;
    //cout<<"Player 1 Turn:  ";
    for(int i=2; i<(2*raw+2); i++) {

        if(i%2==0) {
            cout<<"\nPlayer 1 Turn: ";
            cin>>rw;
            cin>>cl;
            game1.player1Turn(rw, cl);
        }
        else {
            cout<<"\nPlayer 2 Turn: ";
            cin>>rw;
            cin>>cl;
            game1.player2Turn(rw, cl);
        }

    }
    game1.finalShape();
    game1.winner();
    return 0;
}