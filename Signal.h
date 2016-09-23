#pragma once
#include <string>

using namespace std;


/* class to input historical data about a specific signal at a specific time interval*/
/* contributed by the data group */

class Signal
{
private:

	string location;	// college and drake
	
	const double latitude;
	const double longitude;

	int startTime; //0730 hours
	int endTime;

	//car count totals for thru lane//
	int southBoundCount; 
	int westBoundCount;
	int northBoundCount;
	int eastBoundCount;

	
};