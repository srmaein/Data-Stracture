#include<iostream>
using namespace std;
void even(int S,int E)
{
    if(E<S)
    {
        return;
    }
    E%2==0?even(S,E-2)
    :even(S,E-1);
    if(E%2==0){
        cout<<E<<" ";
    }
}
void odd(int S,int E){
    if(E<S){
        return;
    }
    E%2==1?odd(S,E-2)
    :odd (S,E-1);
    if(E%2==1){
        cout<<E<<" ";
    }
}
int main()
{
    int S=12,E=23;
    cout<<"Even numbers:"<<endl;
    even(S,E);
    cout<<endl;
    cout<<"Odd numbers:"<<endl;
    odd(S,E);
    
    return 0;
}
