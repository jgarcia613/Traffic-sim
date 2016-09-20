//************************************
//Acceleration Traifc Simulation
//************************************
#include <iostream>
#include <string>
#include "Vehicle.h"

int timeOfDay = 0;

ostream &operator<<(ostream &output, Vehicle inputVehicle)
{
	using namespace std;
	
	output << "Seconds Passed:\t" << timeOfDay++ << endl;
	output << "Model:\t\t" << inputVehicle.getModel() << endl;
	output << "Latitude:\t" << inputVehicle.getlatitude() << endl;
	output << "Longitude:\t" << inputVehicle.getLongitude() << endl;
	output << "Current Speed:\t" << inputVehicle.getCurrentSpeed() << endl;
	output << endl << endl;
	system("pause");
	system("cls");
	return output;
}

int main()
{

	Vehicle myCar;										//first create a car
	myCar.setlatitude(0);								//set its starting values
	myCar.setLongitude(0);								//**
	myCar.setDirection(1);								//**
	myCar.setCurrentSpeed(0);							//**
	myCar.setAccelerationSpeed(5);						//**
	myCar.setAcceleration(2);							//**
	myCar.setbrakingSpeed(5);							//**
	myCar.setTime(1);									//**
	myCar.setModel("Honda");							//**
	myCar.setCurrentSpeed(1);							//**
	myCar.setMaxSpeed(60);								//**

	while(true)
	{
		++myCar;
		cout << myCar;
	}
}//End of main