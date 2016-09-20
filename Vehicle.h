#pragma once
#include <iostream>
#include <string>

using namespace std;
class Vehicle
{
private:
	string vehicleModel;
	int minSpeed;
	int maxSpeed;
	int accelerationSpeed;
	int brakingSpeed;
	int time;
	double currentSpeed;
	int tracktion;
	int weight;
	int brakingPower;
	int length;
	int width;
	int hazardRating;
	double latitude;
	double longitude;
	double direction;		//radians east is zero
	double acceleration;
	bool oversized;
	bool emergencyVehicle;

public:
	friend ostream &operator<<(ostream &output, Vehicle inputCar);
	Vehicle();
	
	

	Vehicle operator++()
	{
		updatePosition(getTime());
		return *this;
	}
								//526-528
	Vehicle operator++(int x)	//post fix pages 384-416
	{
		currentSpeed = currentSpeed + acceleration / 3600;
		longitude += 0.001;
		return *this;
	}

	string getModel();
	int getTime();
	int getbrakingSpeed();
	int getAccelerationSpeed();
	int getMinSpeed();
	int getMaxSpeed();
	double getCurrentSpeed();
	int getTracktion();
	int getWeight();
	int getbrakingPower();
	int getLength();
	int getWidth();
	int getHazardRating();
	double getlatitude();
	double getLongitude();
	double getDirection();
	double getAcceleration();
	bool getOversized();
	bool getEmergencyVehicle();

	void setTime(int inputTime);
	void setbrakingSpeed(int inputSpeed);
	void setAccelerationSpeed(int inputSpeed);
	void setModel(string inputModel);
	void setMinSpeed(int inputSpeed);
	void setMaxSpeed(int inputSpeed);
	void setCurrentSpeed(double inputSpeed);
	void setTracktion(int inputTraction);
	void setWeight(int inputWeight);
	void setbrakingPower(int inputbrakingPower);
	void setLength(int inputLength);
	void setWidth(int inputWidth);
	void setHazardRating(int inputHazardRating);
	void setlatitude(double inputlatitude);
	void setLongitude(double inputLongitude);
	void setDirection(double inputDirection);
	void setAcceleration(double inputAcceleration);
	void setOversized(bool inputOversized);
	void setEmergencyVehicle(bool inputEmergencyVehicle);

	//**Work on Me**
	void updatePosition(double time);
};