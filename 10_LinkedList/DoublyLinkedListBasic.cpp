#include<stdio.h>
#include<string.h>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }

};



int main()
{
    Node* node_1 = new Node(5); 
    Node* node_2 = new Node(10); 
    Node* node_3 = new Node(15); 

    node_1->next = node_2;

    node_2->prev = node_1;
    node_2->next = node_3;

    node_3->prev = node_2;


    return 0;
}