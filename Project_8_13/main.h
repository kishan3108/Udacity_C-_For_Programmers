//
// Created by CYNGN_Intern on 8/15/18.
//

#ifndef PROJECT_8_13_MAIN_H
#define PROJECT_8_13_MAIN_H

#endif //PROJECT_8_13_MAIN_H
#include<string>

using namespace std;

class cat{
    string name;
    string breed;
    int age;

public:
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    void getName();
    void getBreed();
    void getage();
    void printinfo();


};

void cat::setName(string nameIn) {
    name=nameIn;
}

void cat::setBreed(string breedIn) {
    breed= breedIn;
}

void cat::setAge(int ageIn) {
    age=ageIn;
}

void cat::getName(){
    cout<<name<<endl;
}

void cat::getBreed(){
    cout<<breed<<endl;
}

void cat::getage(){
    cout<<age<<endl;
}

void cat::printinfo() {
    cout<<name<<"  "<<breed<<"  "<<age<<endl;
}

