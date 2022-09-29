#include "stuff.h"

Stuff::Stuff()
{
	stuff_num = 0;
	weight_capacity = 0;
	max_value = 0;
}

Stuff::~Stuff()
{

}

void Stuff::SetStuff(int _stuff_weight, int _stuff_value)
{
	stuff_weight.push_back(_stuff_weight);
	stuff_value.push_back(_stuff_value);
	stuff_num++;
}

void Stuff::SetWeightCapacity(int _weight_capacity)
{
	weight_capacity = _weight_capacity;
}

void Stuff::PrintStuff()
{
	std::cout << "Stuff size : " << stuff_num << std::endl;
	for (int i = 0; i < stuff_num; i++) 
	{
		std::cout << "Stuff number " << i+1 << ", weight : " << stuff_weight[i] << "    ";
		std::cout << " value  : " << stuff_weight[i] << std::endl;
	}
}

int Stuff::GetStuffSize()
{
	return stuff_num;
}

int Stuff::GetMaxValue()
{
	return max_value;
}

void Stuff::OptimizateStuff()
{
	int current_value = 0;
	for (int i = 0; i < stuff_num; i++)
	{
		for (int j = i + 1; j < stuff_num; j++)
		{
			if ((stuff_weight[i] + stuff_weight[j]) == weight_capacity)
			{
				current_value = stuff_value[i] + stuff_value[j];
				if (max_value < current_value)
					max_value = current_value;
			}
		}
	}
}