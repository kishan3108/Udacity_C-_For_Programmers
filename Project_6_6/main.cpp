
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location;
    //scanf("%d",&number);
    //TODO: write code to determine if integers entered by 
    //the user are in searchArray
    cin>>searchKey;
    for(int i=0; i<10; i++) {
        if (searchKey == searchArray[i]) {
            location = i + 1;
            break;
        }
         else
            location = -1;

    }
    //Use these commands to give feedback to the user
    if(location != -1)
    {
        std::cout<<searchKey<<" is at location "<<location<<" in the array.\n";
    }
    else
    {
        std::cout<<searchKey<<" is not in the array.\n";
    }
        
    return 0;
}
