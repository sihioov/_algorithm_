// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int BinarySearch(int* arry, int n, int left, int right);
int main()
{
    //int* arr = new int[10];

    int arr[10]  = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    int result = BinarySearch(arr, 3, 0, 9);

    printf("\n%d\n", result);

}

int BinarySearch(int* arry, int n, int left, int right)
{
    if (left > right)
        return -1;
    

    int mid = (left + right) / 2;

    if (arry[mid] == n)
        return mid;
    else if (arry[mid] > n)
        return BinarySearch(arry, n, left, mid - 1);
    else
        return BinarySearch(arry, n, mid + 1, right);

}