#include "Location.h"



Location::Location()
{
}


Location::~Location()
{
}

void Location::printLocation()
{
	cout << "x is " << xCoord << " y is " << yCoord;
}


void Location::setXCoord(int value)
{
	xCoord = value;
}
void Location::setxCoord(int value)
{
	yCoord = value;
}
int Location::getXCoord()
{
	return xCoord ;
}
int Location::getxCoord()
{
	return yCoord ;
}