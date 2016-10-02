#pragma once
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

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

public:
	friend ostream &operator<<(ostream &output, Vehicle lorry);

	Vehicle();
	~Vehicle();

	Vehicle operator ++(int x)	// book pages for overloading 384-416   output operator in the 500 range
	{
		currentSpeed = currentSpeed + acceleration / 3600;	//one second
		longitude += 0.001;
		if (currentSpeed > maxSpeed)
		{
			currentSpeed = maxSpeed;
		}
		return *this;
	}

	Vehicle(string data);
	void setKind(string data);
	void setMaxSpeed(int data);
	void setMinSpeed(int data);
	void setCurrentSpeed(double data);
	void setTraction(int data);
	void setWeight(int data);
	void setBrakePower(int data);
	void setLeangth(int data);
	void setWidth(int data);
	void setHazardRating(int data);

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

	double getLongitude();
	double getLatitude();
	double getAcceleration();
	bool getEmergencyVehicle();
	bool getOverSized();


};

