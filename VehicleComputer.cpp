//************************************************************************
//	VehicleComputer
//
//	This class is for calculating any movements a Vehicle might need.
//	This will eventually also be responsible for moving a car down a road
//
//***********************************************************************
#pragma once
#include "Includes.h"

VehicleComputer::VehicleComputer(int inputTime)
{
	time = inputTime;
}
double VehicleComputer::calculateDistance(Vehicle intputVehicle)
{
	return 0.5 * intputVehicle.getAcceleration() * time * time + intputVehicle.getCurrentSpeed() * time;
}
void VehicleComputer::moveVehicle(Vehicle intputVehicle[])
{
	for (int i = 0; i < sizeof(intputVehicle); i++)
		moveVehicle(intputVehicle[i]);
}
//Move the car based on its direction and speed
//If the car is not at max speed,	speed it up to max
//if the car is at max speed,		keep that speed
//if the car need to break,			well will figure that out later
void VehicleComputer::moveVehicle(Vehicle &inputVehicle)
{
	if (inputVehicle.getCurrentSpeed() < inputVehicle.getMaxSpeed())
		accelerateVehicle(inputVehicle);
	else if (inputVehicle.getCurrentSpeed() == inputVehicle.getMaxSpeed())
		constantSpeedVehicle(inputVehicle);
	else
		breakVehicle(inputVehicle);
}
void VehicleComputer::accelerateVehicle(Vehicle &inputVehicle)
{
	double distanceMoved = calculateDistance(inputVehicle);
	double y = distanceMoved*sin(inputVehicle.getDirection()*0.0174533)*0.000009;
	double x = distanceMoved*cos(inputVehicle.getDirection()*0.0174533)*0.000009;
	inputVehicle.setLatitude(inputVehicle.getLatitude() + y);		//was setlatitude and getlatitude. corrected to setL.. and getL.. to fix error (Spence Wilson 0940 10/4/16)
	inputVehicle.setLongitude(inputVehicle.getLongitude() + x);
	cout << "Change in speed:\t" << (inputVehicle.getCurrentSpeed() + inputVehicle.getAcceleration() * time) << endl; //**OUTPUT for cange in speed:	XXXX
	inputVehicle.setCurrentSpeed(inputVehicle.getCurrentSpeed() + inputVehicle.getAcceleration() * time);
}
void VehicleComputer::constantSpeedVehicle(Vehicle &inputVehicle)
{

}
void VehicleComputer::breakVehicle(Vehicle &inputVehicle)
{
	inputVehicle.setCurrentSpeed(inputVehicle.getMaxSpeed());
}