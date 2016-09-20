#pragma once
#include "Includes.h"

class Vehicle
{
private:
	string vehicleModel;
	int minSpeed;
	int maxSpeed;
	int accelerationSpeed;
	int brakingSpeed;
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
	Vehicle(enum CARTYPES inputCARTYPE);

	Vehicle operator++()
	{
		currentSpeed = currentSpeed + acceleration / 3600;
		longitude += 0.001;
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
	double getAcceleration();
	bool getOversized();
	bool getEmergencyVehicle();
	double getDirection();

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
	void setAcceleration(double inputAcceleration);
	void setOversized(bool inputOversized);
	void setEmergencyVehicle(bool inputEmergencyVehicle);
	void setDirection(double inputDirection);
	void applyAcceleration(double time);
};
