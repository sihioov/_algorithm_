// Linkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


typedef struct _NODE {
    int data;
    _NODE *next;
    
  
} NODE;


void addNode(NODE *list, int data)
{

    if (list == NULL)
    {
        printf("List is empty");
        return;
    }
        
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode->next = list->next;
    newNode->data = data;
    list->next = newNode;
}



int main()
{
    NODE *head;
    NODE *cur;


    
}


