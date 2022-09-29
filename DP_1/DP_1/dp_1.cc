// DP_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include "stuff.h"
//#include <Windows.h>


int Fibonacci(int n)
{
    int num_result= 0;
    if (n == 1 || n == 2)
        return 1;

    num_result = Fibonacci(n - 1) + Fibonacci(n - 2);
    return num_result;
}

void sort()
{

}

void PSPacking()
{
    //std::shared_ptr<int> stuff_number;
    //std::shared_ptr<int> capacity_weight;
    std::cout << "Input stuff num & weight" << std::endl;
    
    int stuff_number;
    int capacity_weight;

    std::cin >> stuff_number;
    std::cin >> capacity_weight;

    std::cout << "stuff : " << stuff_number << ", " << "weight : " << capacity_weight << std::endl;

    std::vector<int> v(stuff_number);
    std::shared_ptr<Stuff> stuff = std::make_shared<Stuff>();
    //Stuff a;
    
    for (int i = 0; i<stuff_number; i++)
    {
        //std::cout << "size : " << v.size() << std::endl;
        std::cout << "Input stuff num & weight" << std::endl;
    }
    

}

int main()
{

    //std::cout << "Hello World!!!\n";
    std::shared_ptr<int> s1;//(new int(10));
    s1 = std::make_shared<int>(10);
    std::cout << *s1 << std::endl;

    int a = 3 + *s1;

    PSPacking();
    


}

