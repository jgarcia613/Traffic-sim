//Jaqueline Garcia, Andrew Byrne, David Sant
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;


/* class to input data about a specific signal at a specxific time interval*/

class Signal
{
private:
	

	string location;	// college and drake

	double latitude;
	double longitude;

	int startTime; //0730 hours
	int endTime;

	//car count totals for thru lane//
	int southBoundCount;
	int westBoundCount;
	int northBoundCount;
	int eastBoundCount;
public:
	Signal();
	void vectorFill(ifstream &fin);		
	void printVector();

};
