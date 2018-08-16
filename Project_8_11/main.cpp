#include <iostream>
#include "main.h"
using namespace std;
int main() {
    Dog dog1;
    dog1.setName("Trixie");
    dog1.setLicenseNumber(1234);

    Dog dog2;
    dog2.setName("Kali");
    dog2.setLicenseNumber(5678);

    cout<<dog1.getName()<<endl;
    cout<<dog1.getLicenseNumber()<<endl;

    dog1.printInfo();
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}