#ifndef _STUFF_H
#define _STUFF_H

#include <vector>

class Stuff
{
	public: 
		Stuff(void);
		virtual ~Stuff(void);
	private:
		std::vector<int> stuff_weight;
		std::vector<int> stuff_value;

	public:
		void SetStuff(int _stuff_weight, int _stuff_value);
};

#endif;
