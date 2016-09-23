#pragma once
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

#define PI 3.141592654

class Vehicle
{
private:
	string kind;	//enumeration later
	int maxSpeed;	//double
	int minSpeed;	//double
	int traction;
	int weight;
	int brakePower;
	int leangth;
	int width;
	int hazardRating;
	double currentSpeed;
	double direction;	// radains, E is 0
	double longitude;
	double latitude;
	double acceleration;
	bool emergencyVehicle;
	bool overSized;

	friend ostream &operator<<(ostream &output, Vehicle lorry);			//overload << outputs all members
	friend void simplePrint(Vehicle lorry);								//outputs current speed, acceleration, direction, long, lat
	friend void directionPrint(Vehicle lorry);							//outputs direction degrees, and cardinal direction


public:

	Vehicle();
	~Vehicle();
	Vehicle(string data);

	Vehicle operator ++(int x);

	void setKind(string data);
	void setMaxSpeed(int data);
	void setMinSpeed(int data);
	void setTraction(int data);
	void setWeight(int data);
	void setBrakePower(int data);
	void setLeangth(int data);
	void setWidth(int data);
	void setHazardRating(int data);
	void setCurrentSpeed(double data);
	void setDirection(double data);
	void setLongitude(double data);
	void setLatitude(double data);
	void setAcceleration(double data);
	void setEmergencyVehicle(bool data);
	void setOverSized(bool data);

	string getKind();
	int getMaxSpeed();
	int getMinSpeed();
	int getTraction();
	int getWeight();
	int getBrakePower();
	int getLeangth();
	int getWidth();
	int getHazardRating();
	double getCurrentSpeed();
	double getDirection();
	double getLongitude();
	double getLatitude();
	double getAcceleration();
	bool getEmergencyVehicle();
	bool getOverSized();

	// These are mine (Isaac Haas, Output Group)  ******************************************************

	double directionDegrees();
	double convertRadians(double numRadians);
	string calculateCardinalDirection();
};