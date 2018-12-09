#pragma once
#include "human.h"

struct sTypeOfWarrior
{
	int health;
	int fireResistence;
	int waterResistence;
	int eartResistence;
	int lightninResistence;
	int physicalResistence;
	int speed;
	int damage;
};
enum ItypeOfWarrior
{
	LIGHT = 0, MID = 1, HEAVY = 2
};
sTypeOfWarrior TYPES[3] = {
	/*LIGHT_WARRIOR*/	 {200, 40, 40, 40, 60, 30, 500, 50} ,
	/*MID_WARRIOR*/		 {300, 50, 50, 40, 50, 60, 300, 70} ,
	/*HEAVY_WARRIOR*/	 {400, 60, 70, 60, 40, 70, 100, 90} ,
};


class warrior: virtual public human
{
private:
	int iTypeOfBody;
	float endurance;
	sTypeOfWarrior typeOfWarior
protected:
	//constructor
	warrior(int tNumOfRoomInHouse, float tEndurance) : typeOfBody(tNumOfRoomInHouse), endurance(tEndurance) {};
	warrior(int tNumOfRoomInHouse, float tEndurance, std::string tName)
		:human(tName), typeOfBody(tNumOfRoomInHouse), endurance(tEndurance) {};
	warrior();
	//set Method
	void setTypeOfBody(int tNumOfRoominHouse);
	void setEndurance(float tEndurance);
	void setEndurance(float a, float b);
	//get Method
	int getTypeOfBody();
	float getEndurance();
	//destructor
	~warrior();
};



warrior::warrior()
{
}

inline void warrior::setTypeOfBody(int tTypeOfBody)
{
	typeOfBody = tTypeOfBody;
}

inline void warrior::setEndurance(float tEndurance)
{
	endurance = tEndurance;
}

inline void warrior::setEndurance(float a, float b)
{
	endurance = a * b;
}

inline int warrior::getTypeOfBody()
{
	return typeOfBody;
}

inline float warrior::getEndurance()
{
	return endurance;
}

warrior::~warrior()
{
}
