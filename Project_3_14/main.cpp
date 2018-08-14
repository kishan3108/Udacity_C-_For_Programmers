/*Fix the errors and get an error free compilation and execution.*/
#include<iostream>
#include<math.h>
//#include"input.txt"

int main()
{
    //Make sure the variable letter case are same throughout the script
    int coeff1, coeff2, constant;
    int Exp1, Exp2;
    int y;
    int x;
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    std::cout<<"What is the first coefficient?\t";
    std::cin>>coeff1;
    std::cout<<coeff1<<"\n";
    std::cout<<"What is the exponent of the first term?\t";
    std::cin>>Exp1;
    std::cout<<Exp1<<"\n";
    std::cout<<"What is the second coefficient?\t";
    std::cin>>coeff2;
    std::cout<<coeff2<<"\n";
    std::cout<<"What is the exponent of the second term?\t";
    std::cin>>Exp2;
    std::cout<<Exp2<<"\n";
    std::cout<<"What is the constant?\t";
    std::cin>>constant;
    std::cout<<constant<<"\n";
    //Print the complete equation
    std::cout<<"The polynomial we are solving is:\n";
    //Make sure you are not hiding any variable.
    std::cout<<"\t"<<coeff1<<"*x"<<"^"<<Exp1<<" + "<<coeff2<<"*x"<<"^"<<Exp2<<" + " <<constant;
    std::cout<<"\nWhat is the value of x?\t";
    std::cin>>x;
    std::cout<<x<<"\n";
    //Solve the equation with the given x
    y = coeff1*pow(x,Exp1) + coeff2*pow(x,Exp2) + constant;
    std::cout<<"y = "<<coeff1<<"*"<<x<<"^"<<Exp1<<" + "<<coeff2<<"*"<<x<<"^"<<Exp2<<" + " <<constant<<" = "<<y;
    return 0;
}