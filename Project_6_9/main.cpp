/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

#include<iostream>
using namespace std;
int main()
{
    const int row=4;
    const int col=4;
    int mult[row][col]={0};
    int vect[col]={0};
    int ans[row]={0};
    for(int i=0; i<row; i++)
    {
        for(int j=0;j<col;j++)
            cin>>mult[i][j];
    }
    cout<<endl<<endl;
    for(int i=0; i<col;i++)
    {
        cin>>vect[i];
    }

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<col;i++)
    {
        cout<<vect[i]<<endl;
    }

    for (int i=0; i< row; i++)
    {
        for(int j=0; j< row; j++)
        {
            ans[i]+=mult[i][j]*vect[j];
        }

    }
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        cout<<ans[i]<<endl;
    }

    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector

    return 0;
}
