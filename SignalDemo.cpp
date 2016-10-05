//Jaqueline Garcia, Andrew Byrne, David Sant
#include "Signal.h"


/* 
Whenever a Signal object is created  with the parameter of Signal(fin) it will call this constructor
*/
Signal::Signal(ifstream &fin) 
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

/* This would be an acceptable way to fill an Array or vector with a declared size. Does not work too well with a dynamic vector.
instead look at the constructor
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
	
}*/

void Signal::printVector()		//prints them too
{
	cout << location << setw(20) << latitude << setw(20) << longitude << setw(20)
	<< startTime << setw(20) << endTime << setw(20) << southBoundCount <<
	setw(20) << westBoundCount << setw(20) << northBoundCount << setw(20) << eastBoundCount << endl;
	
}
