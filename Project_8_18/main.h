//
// Created by CYNGN_Intern on 8/16/18.
//

#ifndef PROJECT_8_8_MAIN_H
#define PROJECT_8_8_MAIN_H

#endif //PROJECT_8_8_MAIN_H
/*header file for main.cpp*/
#include<iostream>
using namespace std;

class Student
{
    int grade[5];
    int id;
public:
    Student();
    void setId(int idin);
    void setGrade(int index, int gradeIn);
    int getId();
    int getGrade(int index);
    float getAvg();
    void printInfo();
    //int getAvg();
};

Student::Student() {
    for(int i=0; i<5; i++){
        grade[i]=0;
    }
}

void Student::setGrade(int index, int gradeIn) {
        grade[index]=gradeIn;
}
void Student::setId(int idin) {
    id=idin;
}
void Student::printInfo() {
    cout<<id<<endl;
    for(int i=0; i<5; i++){
        cout<<"  "<<grade[i]<<endl;
    }
}

int Student::getId(){
    cout<<id<<endl;
}

float Student::getAvg() {
    int sum{0};
    for(int i=0; i<5; i++)
    {
        sum +=grade[i];
    }
    return sum/5.;
}