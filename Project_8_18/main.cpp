/*Goal: look at helper functions in classes*/

#include "main.h"

int main()
{
    Student s1, s2;
    s1.setId(3232);
    s1.setGrade(0,85);
    s1.setGrade(1, 80);
    s1.setGrade(2,98);
    s1.setGrade(3,65);
    s1.setGrade(4,90);
    s1.printInfo();

    s2.setId(2121);
    s2.setGrade(2,58);
    s2.printInfo();


    s1.getId();
    s2.getId();
    cout<<endl<<endl;
    cout<<"avg = "<<s1.getAvg();
    return 0;
}