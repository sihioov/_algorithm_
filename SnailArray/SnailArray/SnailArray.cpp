// SnailArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    int n = 3;

    int** arry = new int*[n];

    for (int i = 0; i < n; i++) {
        arry[i] = new int[n];
        memset(arry[i], 0, sizeof(int)*n);
    }

    //arry[0][0] = 1;
    int j = 0;
    int num = 1;
    int k = 0;
    int l = 0;
    int m = 0;

    for (int i = 0; i < n; i++)
    {

        for (j = i; j < n; j++)
        {
            arry[i][j] = num;
            num++;
        }

        for (k = i+1; k < n-1; k++)
        {
            arry[k][j-1] = num;
            num++;
        }

        for (l = n - 1; l >= 0; l--)
        {
            arry[k][l] = num;
            num++;
        }

        for (m = n - 1; m > 0; m--)
        {
            arry[m-1][l+1] = num;
            num++;
        }
        //i++;
        n -= 2;

        if (n <= 2)
            break;

    }

    // [0][0]  [0][1]  [0][2]
    // [1][0]  [1][1]  [1][2]
    // [2][0]  [2][1]  [2][2]

    // 그냥 재귀로 풀어야할듯?

    // [0][0] -> [0][1] -> [0][2] -> [1][2] -> [2][2] -> [2][1] -> [2][0] -> [1][0] -> [1][1]
    for (int i = 0; i < n; i++)
        delete[] arry[i];

    delete[] arry;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
