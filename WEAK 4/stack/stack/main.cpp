#include<iostream>
using namespace std;
int Stack[100],n=10,Top;
void push(int E){
    if(Top>n-1){
        cout<<"Stack is Full: "<<endl;
    }
    else{
    Stack[Top++] = E;
     cout<< E <<" has been inserted\n";
   }
   }
void pop(){
    if(Top<=0){
        cout<<"Stack is empty: "<<endl;
    }else{
    
     Stack[Top--];
     cout << "Top element has Been Removed\n";
}
}
void peek(){
    if(Top<=0){
        cout<<"Stack is empty: "<<endl;
    }else{
        cout<<"Stack top element is: "<<Stack[Top-1]<<endl;
    }
}
int main(){
    push(35);
    push(50);
    push(90);
    push(100);
    peek();
    pop();
    push(60);
    peek();
};
