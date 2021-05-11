#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

struct Node
{
    int data;
    Node* next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }

};


Node* InsertAtBegin(Node* head, int newNodeData)
{
    printf("Adding new node with value = %d at the begining\n", newNodeData);
    
    Node* newNode = new Node(newNodeData);
    newNode->next = head;
    return newNode;
}


Node* InsertAtEnd(Node* head, int newNodeData)
{
    printf("Adding new node with value = %d at the end\n", newNodeData);

    Node* newNode = new Node(newNodeData);

    if(head == NULL)
        return newNode;

    Node* current = head;

    while(current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;

    return head;
}

//return new head
Node* DeleteNodeFromTheBegin(Node* head)
{
    if(head == NULL)
        return NULL;
    
    Node* newHead = head->next;
    free(head);
    return newHead;
}


void Traverse_a_List(Node* head)
{
    if(head==NULL)
        return;
    
    printf("%d\n", head->data);
    Traverse_a_List(head->next);
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

    head = InsertAtEnd(head, 120);
    head = InsertAtBegin(head, 10);
    head = InsertAtBegin(head, 20);
    head = InsertAtBegin(head, 30);
    head = InsertAtBegin(head, 40);
    head = InsertAtBegin(head, 50);
    head = InsertAtEnd(head, 100);
    


    printf("Printing nodes:\n");
    Traverse_a_List(head);

    FreeAllNodeMemory(head);

    return 0;
}