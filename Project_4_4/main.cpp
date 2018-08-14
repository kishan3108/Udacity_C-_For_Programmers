/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    int A=1, B=1, C=0;
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    int Q= (A && B && C) || (A && ((!B) || (!C)));
    //Use this output format
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";

    std::cout<<A << "\t" << B <<"\t" << C <<"\t" <<(A && B && C) <<"\t" << (!B||!C) << "\t" << (A&&(!B||!C)) << "\t"<<Q<<"\n";
    return 0;
}

//Take: Here they are asking about 8 possible output. Now we can take any value of A, B and C and match them any how as we have 2 *3 *3 =18
//Possible solutions. So you can combine any number of combination. But The purpose of this excercise is to familiarize with the operations.