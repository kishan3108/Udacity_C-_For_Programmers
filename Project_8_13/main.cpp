/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include<iostream>
#include "main.h"

int main(){
    cat cat1, cat2;
    cat1.setName("Alexa");
    cat1.setAge(12);
    cat1.setBreed("Indian");
    cat1.printinfo();
    cat2.setBreed("American");
    cat2.setAge(4);
    cat2.setName("Bono");
    cat2.printinfo();

    cout<<"Play Music"<<endl;
}