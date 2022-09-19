#include<iostream>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],m3[3][3],i,j,m4[3][3];
    cout<<"Enter Elements of 1st Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>m1[i][j];
    }
    cout<<"Enter Elements of 2nd Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>m2[i][j];
    }
    cout<<"Enter Elements of 3rd Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>m3[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            m4[i][j] = m1[i][j]+m2[i][j]+m3[i][j];
    }
    cout<<"Addition of 3  Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<m4[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
