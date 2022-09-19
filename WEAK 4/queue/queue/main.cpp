#include<iostream>
using namespace std;
int Queue[100],top,n=10,front,Rear;
void enque(int e){
    if(top>n-1){
        cout<<"Queue is full"<<endl;
    }
    else{
        Queue[top++]=e;
        cout<<e<<" Has been inserted"<<endl;
        
    }
    }
    void deque(){

    if(top<0){
        cout<<"Queue is empty"<<endl;

    }
    else if (front == Rear)
    {
        front = Rear = -1;
        cout << "Dequeue operation is performed "<<endl;
        
    }
    else
    {
        front++;
        
    }
}
    int main(){
        enque(20);
        enque(10);
        enque(30);
        enque(40);
        deque();
        
    }
