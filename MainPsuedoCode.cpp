#include <iostream>
#include <vector>
#include <iomanip>
#include "Vehicle.h"
using namespace std;

pseudo code
main 
{
	create data structure(s);
		// vector of TrafficPopulation
	generate vehicles(all or some);
		// each vehicle generated is placed in the vector
	generate intersections, roads, traffics signals
		// each intersection placed in an array

	loop(by seconds)
	{
		// notes by Justin
		change traffic lights
			// relates to time
			// happens in intersection
		move each vehicle
		interrelate the roads and intersections
		check for issues crashes
		maybe check for in or out of intersecions
		vehicles add or leave environment?
			// vehicles should leave from a road
			// check population count
	}
}




			// local to road
			// time global


int main()
{
	Vehicle one;
	//Vehicle two;

	cout << "speed   acceleration   Longitute\n";
	one.setMaxSpeed(150);
	one.setCurrentSpeed(60);
	one.setAcceleration(100);
	one.setLongitude(40.000);
	cout << one.getCurrentSpeed() << setw(7) << one.getAcceleration() << setw(7) << one.getLongitude()<<endl;
	one++;
	cout << one.getCurrentSpeed() << setw(7) << one.getAcceleration() << setw(7) << one.getLongitude()<<endl;
	cout << "calling overload\n";
	cout << one;



	vector<Vehicle> myList;
	for (int i = 0; i < 10; i++)
	{
		myList.push_back(one);
		myList[i].setMaxSpeed(i);	
	}
	

	for (int i = 0; i < myList.size(); i++)
	{
		cout << myList[i].getMaxSpeed() << endl;	
	}
	
	vector<Vehicle>::iterator itsy;

	
	for (itsy = myList.begin();itsy < myList.end(); itsy++)
	{
		cout << itsy->getMaxSpeed();
	}



	//cout << one.getMaxSpeed();

	cout << endl << endl;
	system("pause");
	return 0;
}