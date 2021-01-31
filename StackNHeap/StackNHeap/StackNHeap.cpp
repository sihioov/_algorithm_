// StackNHeap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;
#define ArrayLength(X) (sizeof(X)/sizeof(X[0]))
// LIFO
class Stack {

    
    int index = -1;
    int* data;
    //int size = ArrayLength(arry);
   
    Stack(int size) 
    { 
        data = new int[size];
    }

    void push(int n)
    {
        data[++index] = n;
    }

    void pop()
    {
        if (index > 0)
        {
            cout << data[index] << endl;
            data[index] = 0;
            index--;
        }
    }
};

// FIFO
class Queue {
    int front;
    int rear;
    int* data;

    Queue(int size) 
    {
        front = 0;
        rear = 0;
        data = new int[size];
    }

    void push(int n)
    {
        data[rear++] = n;
    }
    
    void pop()
    {
        front++;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

