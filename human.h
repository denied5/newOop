#pragma once
#include <string>
class human
{
private:
	std::string name;
protected:
	//constructor
	human();
	human(std::string tName) : name(tName) {};
	//методи Get
	std::string getName();
	//методи Set
	void setName(std::string tName);
	//virtual destructor
	virtual ~human();
};


inline std::string human::getName()
{
	return name;
}

inline void human::setName(std::string tName)
{
	name = tName;
}

human::human()
{
}


human::~human()
{
}
