#pragma once
#include "human.h"

struct sTypeOfWizard
{
	int health;
	int fireResistence;
	int waterResistence;
	int eartResistence;
	int lightninResistence;
	int physicalResistence;
	int speed;
	int spelDamage;
};
enum ItypeOfWizard
{
	LIGHTNING = 0, FIRE = 1, WATER = 2, EARTH = 3
};
sTypeOfWizard TYPES[4] = {
/*LIGHTNING_WIZARD*/ {100, 40, 40, 40, 90, 0, 20, 30} , 
/*FIRE_wIZARD*/		 {90, 90, 50, 40, 5, 0, 20, 30} ,
/*WATER_wIZARD*/	 {90, 50, 90, 40, 5, 0, 20, 30} ,
/*EARTH_wIZARD*/	 {150, 40, 40, 90, 10, 0, 20, 30}
};


class wizard : virtual public human
{
private:
	int mana;
	int iTypeOfWizard;
	sTypeOfWizard typeOfWizard;
protected:
	//constructor
		wizard(int tMana, int tTypeOfWizard) : mana(tMana), iTypeOfWizard(tTypeOfWizard),
			typeOfWizard(TYPES[tTypeOfWizard]) {};
		wizard(int tMana, int tTypeOfWizard, std::string tName)
			:human(tName), mana(tMana), iTypeOfWizard(tTypeOfWizard) {};
		wizard();
	//set Method
		void setMana( int tMana);
		void setCastOfSpels(int tCastOfSpels);
	//get Method
		int getMana();
		float getCastOfSpels();
	//destructor
		~wizard();
};


wizard::wizard()
{
}


inline void wizard::setMana(int tMana)
{
	mana = tMana;
}

inline void wizard::setCastOfSpels(int tTypeOfWizard)
{
	typeOfWizard = TYPES[tTypeOfWizard];
	iTypeOfWizard = tTypeOfWizard;
}

inline int wizard::getMana()
{
	return mana;
}

inline float wizard::getCastOfSpels()
{
	return iTypeOfWizard;
}

wizard::~wizard()
{
}
