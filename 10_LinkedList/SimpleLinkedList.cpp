#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }

};

void printList(Node *node)
{
    if(node == NULL)
    {
        return;
    }

    cout<<node->data<<endl;

    printList(node->next);
}

void insertAttheBegining(Node *head, Node *newItem)
{
    if(newItem != NULL)
    {
        newItem->next = head;
    }

    head = newItem;
}

int main()
{

    Node *a = new Node(5);
    Node *b = new Node(10);
    Node *c = new Node(23);

    a->next = c;
    c->next = b;
    Node *head = a;
    printList(head);

    //insert at the begining of the linked list
    



    return 0;
}