//Jaqueline Garcia, Andrew Byrne, David Sant
#include "Signal.h"



Signal::Signal()
{
	location = "null";
	latitude = -1.0;
	longitude = -1.0;
	startTime = -1; //0730 hours
	endTime = -1;
	//car count totals for thru lane//
	 southBoundCount = -1;
	 westBoundCount = -1;
	 northBoundCount = -1;
	 eastBoundCount = -1;
}

void Signal::vectorFill(ifstream &fin)		//fills the object's data members
{
	
	fin >> location;	
	fin >> latitude;
	fin >> longitude;
	fin >> startTime;
	fin >> endTime;
	fin >> southBoundCount;
	fin >> westBoundCount;
	fin >> northBoundCount;
	fin >> eastBoundCount;
	
}

void Signal::printVector()		//prints them too
{
	cout << location << setw(20) << latitude << setw(20) << longitude << setw(20)
	<< startTime << setw(20) << endTime << setw(20) << southBoundCount <<
	setw(20) << westBoundCount << setw(20) << northBoundCount << setw(20) << eastBoundCount << endl;
	
}
