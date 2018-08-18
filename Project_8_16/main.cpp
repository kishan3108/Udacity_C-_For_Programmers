#include <iostream>
#include <string>

using namespace std;
class CAT{
    string breed;
    string name;
    int age;

public:
    CAT();
    void setBreed(string BreedIn);
    void setName(string nameIn);
    void printInfo();
    ~CAT();
};

void CAT::setBreed(string BreedIn) {
    breed=BreedIn;
}

void CAT::setName(string nameIn) {
    name=nameIn;
}
void CAT::printInfo() {
    cout<<name<<"  "<<breed<<endl;
}
CAT::CAT() {
    name="cat";
    breed="cat breed";
}
CAT::~CAT() {
    cout<<"Play Hard";
}

int main() {

    CAT cat1, cat2;
    cat1.setName("Alexa");
    cat1.setBreed("Indian");
    cat1.printInfo();
    cat2.printInfo();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}