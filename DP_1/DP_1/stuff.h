#ifndef _STUFF_H
#define _STUFF_H

#include <iostream>
#include <vector>

class Stuff
{
	public: 
		Stuff(void);
		virtual ~Stuff(void);
	private:
		std::vector<int> stuff_weight;
		std::vector<int> stuff_value;
		int stuff_num;
		int weight_capacity;
		int max_value;

	public:
		void SetStuff(int _stuff_weight, int _stuff_value);
		void SetWeightCapacity(int _weight_capacity);
		void PrintStuff(void);
		int  GetStuffSize(void);
		int  GetMaxValue(void);
		void OptimizateStuff(void);
};

#endif;
