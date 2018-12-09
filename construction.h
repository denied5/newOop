#pragma once
#include "building.h"
#include "house.h"
#include <string>

class construction: public building, public wizard 
{
private:
	std::string address;
	bool internet;
protected:
	construction();
	~construction();
};



construction::construction()
{
}


construction::~construction()
{
}
