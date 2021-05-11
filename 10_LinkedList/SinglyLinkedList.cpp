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
    printf("Deleting First node. ");
    
    if(head == NULL)
    {
        printf("No data to delete.\n");
        return NULL;
    }
    printf("Deleting value = %d\n", head->data);
    
    Node* newHead = head->next;
    free(head);
    return newHead;
}

Node* DeleteNodeFromTheEnd(Node* head)
{
    printf("Deleting Last node. ");

    if(head == NULL)
    {
        printf("No data to delete.\n");
        return NULL;
    }

    //Only one node exist
    if(head->next == NULL)
    {
        printf("Deleting value = %d\n", head->data);
        free(head);
        return NULL;
    }

    Node* temp = head;
    
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }

    printf("Deleting value = %d\n", temp->next->data);

    free(temp->next);
    temp->next = NULL;
    return head;
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

//return the position of a list if found
int SearchAll(Node* head, int searchItem)
{
    if(head == NULL)
        return -1; //not found

    if(head->data == searchItem)
        return 1;

    int res = SearchAll(head->next, searchItem);

    if(res > 0)
        return 1 + res;

    return res;
} 

Node* InsertAtPosition(Node* head, int position, int value)
{
    Node* temp = head;
    int I=1;

    if(position == 1)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        return newNode;
    }

    for(I=1;I<position-1;I++)
    {
        if(temp!=NULL)
        {
            temp = temp->next;
        }
        else
        {
            break;
        }
    }

    if(I==(position-1))
    {
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else
    {
        printf("Impossible to insert %d at position %d.\n", value, position);
    }

    return head;
}


int main()
{
    Node* head = NULL;

    printf("Add node to singly linked list: \n");

    head = InsertAtEnd(head, 120);
    head = InsertAtBegin(head, 10);
    head = InsertAtBegin(head, 20);
    head = InsertAtBegin(head, 30);
    head = InsertAtBegin(head, 40);
    head = InsertAtBegin(head, 50);
    head = InsertAtEnd(head, 100);

    printf("\nPrinting nodes:\n");
    Traverse_a_List(head);

    //Insert at a position
    int position = 8;
    int positionValue = 1000;
    head = InsertAtPosition(head, position, positionValue);

    printf("\nPrinting nodes after insertion :\n");
    Traverse_a_List(head);

    printf("\nSearching...\n");
    int searchItem = 150;
    int searchResult = SearchAll(head, searchItem);
    printf("Search result for %d is = ");
    
    if(searchResult < 0)
    {
        printf("Not found.\n");
    }
    else
    {
        printf("Found. Position = %d\n", searchResult);
    }

    printf("\nDeletion from first, Testing.\n");
    head = DeleteNodeFromTheBegin(head);

    printf("\nDeletion from last, Testing.\n");
    head = DeleteNodeFromTheEnd(head);

    printf("\nPrinting nodes after deletion:\n");
    Traverse_a_List(head);

    FreeAllNodeMemory(head);

    return 0;
}