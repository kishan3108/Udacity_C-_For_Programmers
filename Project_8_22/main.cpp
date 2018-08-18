/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include "main.h"



int main()
{
    int SIZE=2;
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    Dog roster[4];
    roster[1].setName("Rocky");
    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}
