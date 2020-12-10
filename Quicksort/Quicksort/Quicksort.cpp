// Quicksort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int* x, int* y);
void Quicksort(int* arry, int size);
using namespace std;

int main()
{
    int exArry[10] = { 3, 9, 4, 7, 5, 0, 1, 6, 8, 2 };
    Quicksort(exArry, 10);
    for (int i = 0; i < 10; i++)
        cout << exArry[i] << " ";
        
}


void Quicksort(int* arry, int size)
{
    int PivotIndex = size / 2 -1;

    int start = -1;
    int end = size;

    int* result = new int[size];
    memcpy(result, arry, sizeof(int) * size);
    
    

    for (int i = 0; i < PivotIndex; i++)
    {
        if (arry[PivotIndex] < arry[i])
        {
            //start = i;
            for (int j = end; j > PivotIndex; j--)
            {
                if (arry[PivotIndex] > arry[j])
                {
                    swap(&arry[i], &arry[j]);
                    end = j;
                }
            }
        }

        /*if (start != -1 && end != -1)
        {
            swap(&result[start], &result[end]);
        }*/
        
    }


    // Left sort

    // Right sort

}

void swap(int* x, int* y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}


