#include "stuff.h"

Stuff::Stuff()
{

}

Stuff::~Stuff()
{

}

void Stuff::SetStuff(int _stuff_weight, int _stuff_value)
{
	stuff_weight.push_back(_stuff_weight);
	stuff_value.push_back(_stuff_value);
}