#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

struct Node
{
    Node* next;
    int data;

    Node(int d)
    {   
        data = d;
        next = NULL;
    }
};


struct Stack
{
    Node* head;

    //use this variable to provide the size of stack in O(1) time
    int _size;

    Stack()
    {
        head = NULL;
        _size = 0;
    }

    void push(int value)
    {
        Node* temp = new Node(value);
        temp->next = head;
        head = temp;

        _size++;
    }

    int pop()
    {
        if(head == NULL)
        {
            return INT_MIN;
        }
        int res = head->data;
        //for clearing the memory
        Node* temp = head;
        head = head->next;
        _size--;
        free(temp);
        return res;
    }

    int top()
    {
        if(head == NULL)
            return INT_MIN;
        
        return head->data;
    }

    int size()
    {
        return _size;
    }

    bool isEmpty()
    {
        return (head == NULL);
    }

    ~Stack()
    {
        cout<<"Clearing memory"<<endl;
        while(head != NULL)
        {
            Node* temp = head;
            head = head->next;
            free(temp);
        }
    }


};


int main()
{
    Stack myStack;

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