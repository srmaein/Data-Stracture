#include<iostream>
using namespace std;

class stack
{
    public:
    int stack[15], top=-1;

bool empty()
{
    if(top==-1)
  {
    return true;
  }
            
    return false;
}
bool full()
{
    if(top==14)
  {
    return true;
  }
    return false;
}

void push(char value)
{
    if(empty())
    {
        top = 0;
        stack[top]=value;
     }
    else if(full())
       {
        cout<<"Stack is Full";
        }
        else
        {
            stack[top++]=value;
        }
}

void pop()
{
    if(empty())
    {
        cout<<"";
    }
        else
    {
        cout<<(char)stack[top--]<<" ";
    }
    }
};

int main()
{
    stack m;

    m.push('S');
    m.push('T');
    m.push('R');
    m.push('U');
    m.push('C');
    m.push('T');
    m.push('U');
    m.push('R');
    m.push('E');

    m.pop();
    m.pop();
    m.pop();
    m.pop();
    m.pop();
    m.pop();
    m.pop();
    m.pop();
    m.pop();
    m.pop();
        
    return 0;
}
