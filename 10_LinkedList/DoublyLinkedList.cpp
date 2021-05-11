#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

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

Node* InsertAtBegin(Node* head, int newValue)
{
    Node* newNode = new Node(newValue);

    if(head == NULL)
    {
        head = newNode;
        return head;
    }

    head->prev = newNode;
    newNode->next = head;

    return newNode;
}

Node* InsertAtEnd(Node* tail, int newValue)
{
    Node* newNode = new Node(newValue);

    if(tail == NULL)
    {
        tail = newNode;
        return tail;
    }

    tail->next = newNode;
    newNode->prev = tail;

    return newNode;
}

void PrintLinkedListFromBegining(Node* head)
{
    if(head==NULL)
        return;
    
    printf("%d\n", head->data);
    PrintLinkedListFromBegining(head->next);
}

void FreeAllNodeMemory(Node* start)
{
    Node* temp;
    while(start != NULL)
    {   
        temp = start;
        start = start->next;
        free(temp);
    }

    printf("Memory Cleared.\n");
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    //Insert first node
    head = tail = InsertAtBegin(head, 10);
    head = InsertAtBegin(head, 15);
    head = InsertAtBegin(head, 20);
    head = InsertAtBegin(head, 25);
    head = InsertAtBegin(head, 30);
    tail = InsertAtEnd(tail, 100);
    tail = InsertAtEnd(tail, 150);
    tail = InsertAtEnd(tail, 200);

    PrintLinkedListFromBegining(head);


    return 0;
}