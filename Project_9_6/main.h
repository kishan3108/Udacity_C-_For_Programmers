/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog{
private:
    string name;
    int license;
public:
    Dog();
    Dog(string name1);
    Dog(int id1);
    Dog(string name1, int id1);
    string getName();
    int getLicense();

};

Dog::Dog() {
    name="NA";
    license=0;
}

Dog::Dog(string name1) {
    name=name1;
    license=0;
}

Dog::Dog(int id1) {
    license=id1;
    name="NA";
}

Dog::Dog(string name1, int id1) {
    name=name1;
    license=id1;
}

string Dog::getName(){
    return name;
}
int Dog::getLicense() {
    return license;
}