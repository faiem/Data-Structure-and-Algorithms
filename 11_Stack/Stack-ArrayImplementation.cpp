#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


struct Stack
{
    int* arr;
    int _top;
    int capacity;

    //Stack with fixed size
    Stack(int cap)
    {
        capacity = cap;
        arr = new int[cap];
        _top = -1;
    }

    void push(int value)
    {
        if((_top+1)<capacity)
        {
            _top++;
            arr[_top] = value;
        }

        return;
    }

    int pop()
    {
        if(_top>-1)
        {
            int res = arr[_top];
            _top--;
            return res;
        }
        return INT_MIN;
    }

    int top()
    {
        if(_top>=0)
            return arr[_top];
        return INT_MIN;
    }

    int size()
    {
        return _top + 1;
    }

    bool isEmpty()
    {
        return (_top == -1);
    }
};


int main()
{
    Stack myStack(5);

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);
  

    while(!myStack.isEmpty())
    {
        int curr_top = myStack.top();
        cout<<"current top is "<<curr_top<<endl;
        cout<<myStack.pop()<<" has poped."<<endl;
        cout<<"Is the stack empty = "<<myStack.isEmpty()<<endl;
        cout<<"size = "<<myStack.size()<<endl;
        cout<<endl;
    }

    return 0;
}