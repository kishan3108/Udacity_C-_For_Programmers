#include <iostream>

using namespace std;

int main() {
    //Lets define 3 int variables temp for storage and min and max for comparison and storage.
    int temp{};
    int max{};
    int min{};
    int sample=3; //This is number of samples we need to collect for comparison.

    //We need to initialize the first value so the min and max will be the same for just one input.
    cin>>temp;
    max=min=temp;
    cout<<"Current Max  "<<max<<"   "<<"Current Min  "<<min<<endl;

    //Here for for loop as we are intializing one input above, we just need to check for remaining number of inputs.
    for (int i=0; i<(sample-1); i++)
    {
        cin>>temp;
        //We can use two if loops where they will compare min and max with temp and store according values.
        if(temp>max)
            max=temp;
        if(temp<min)
            min=temp;
        cout<<"Current Max  "<<max<<"   "<<"Current Min  "<<min<<endl;
    }

    //Once the loop will be complete this will be the final values of min and max.
    cout<<"After "<<sample<<" inputs, The Final Max  "<<max<<"  "<<"Final Min  "<<min<<endl;

    return 0;
}