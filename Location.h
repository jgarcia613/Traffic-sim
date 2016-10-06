#pragma once
#include "includes.h"
class Location
{
private:
	int xCoord, yCoord; //distance in meters along x or y axis

public:
	Location();
	virtual ~Location();
	void printLocation();

	void Location::setXCoord(int value);
	void Location::setxCoord(int value);
	int Location::getXCoord();
	int Location::getxCoord();
};

