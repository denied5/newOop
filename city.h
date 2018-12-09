#pragma once
#include "construction.h"
#include <string>
#include <vector>
class city: public construction
{
private:
	std::string name;
	int population;
	std::vector<construction> listOfConst;
public:
	construction operator [](const int i);
	city();
	~city();
};



inline construction city::operator[](const int i)
{
	if (i < 0 || i > population) return;
	return listOfConst[i];
}

city::city()
{
}


city::~city()
{
}
