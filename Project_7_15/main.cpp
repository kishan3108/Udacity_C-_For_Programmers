/*Goal: Use 'pass by reference' to a function
**to write this program.
**There are two functions that you need to write 
**for this program:
**calculate(input1, input2, operation, result);
**printEquation(input1, input2, operation, result);
**Pass by reference any value that is modified
**in the function.
**
**Put the declaration and the definitions of the 
**functions in the header file.
*/

#include <iostream>

using namespace std;
int calculate(float, float, char, float &);
void printEquation(float, float, char, float);
int main()
{
    char operation = '*';
    float input1 = 9.8;
    float input2 = 2.3;
    float result=0;
    cout<<result<<endl;
    calculate(input1, input2, operation, result);
    cout<<result<<endl;
    printEquation(input1, input2, operation, result);
    return 0;
}

int calculate(float num1, float num2, char operation, float &result)
{
    switch(operation)
    {
        case '+':
            result=num1 + num2;
            break;
        case '-':
            result=num1 - num2;
            break;
        case '*':
            result=num1*num2;
            break;
    }
    return result;
}

void printEquation(float num1,float num2, char operation, float result )
{
    cout<<num1 <<" "<<operation<<" "<<num2<<" = "<<result;
}