#pragma once
#include "Includes.h"

class VehicleComputer
{
public:
	VehicleComputer(int inputTime);

	double calculateDistance(Vehicle intputVehicle);
	void moveVehicle(Vehicle intputVehicle[]);
	void moveVehicle(Vehicle &intputVehicle);
private:
	void accelerateVehicle(Vehicle &inputVehicle);
	void constantSpeedVehicle(Vehicle &inputVehicle);
	void breakVehicle(Vehicle &inputVehicle);
	int time;
};