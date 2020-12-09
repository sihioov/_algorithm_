// Heapsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void heapify(int i);
void swap(int* x, int* y);

using namespace std;

int n;
int heap[1000001];

// 赛积己
void heapify(int i)
{
    int cur = 2 * i;

    if (cur < n && heap[cur] < heap[cur + 1])
        cur++;

    if (heap[i] < heap[cur])
    {
        swap(heap[i], heap[cur]);

        if (cur <= n / 2)
            heapify(cur);
    }
}

// 赛沥纺
void heapsort(int i)
{
    swap(heap[1], heap[i]);

    int root = 1;
    int cur = 2;

    while (cur / 2 < i)
    {
        cur = 2 * root;
        
        if (cur < i - 1 && heap[cur] < heap[cur + 1])
            cur++;

        if (cur < i && heap[root] < heap[cur])
            swap(heap[root], heap[cur]);

        root = cur;
    }
}

void swap(int* x, int* y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    cout << a << endl;
    cout << b << endl;
}


