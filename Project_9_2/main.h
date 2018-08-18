//
// Created by CYNGN_Intern on 8/17/18.
//

#ifndef PROJECT_9_2_MAIN_H
#define PROJECT_9_2_MAIN_H

#endif //PROJECT_9_2_MAIN_H

#include <iostream>

class Compare{
public:
    int findSmaller(int, int);
    char findSmaller(char, char);
    float findSmaller(float, float);
};

int Compare::findSmaller(int ip1, int ip2) {
    if(ip1>ip2)
        return ip2;
    return ip1;
}

char Compare::findSmaller(char ip1, char ip2) {
    if(ip1>ip2)
        return ip2;
    return ip1;
}

float Compare::findSmaller(float ip1, float ip2) {
    if(ip1>ip2)
        return ip2;
    return ip1;
}