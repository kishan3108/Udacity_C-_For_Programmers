#include "main.h"

int main() {
    Gameboard g1, g2;
    g1.setSpace(1,1,50);
    g1.setSpace(1,2,12);
    g1.setSpace(1,3,23);
    g1.setSpace(1,4,1);
    g1.printInfo();
    g1.fourInRow(1);
    return 0;
}