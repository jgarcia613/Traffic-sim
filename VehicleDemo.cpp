//Jaqueline Garcia, Andrew Byrne, David Sant
#include "Vehicle.h"



Vehicle::Vehicle()
{
}

Vehicle::~Vehicle()
{
}

Vehicle::Vehicle(string data)
{
	kind = data;
}

void Vehicle::setKind(string data)
{
	kind = data;
}
void Vehicle::setMaxSpeed(int data)
{
	maxSpeed = data;
}
void Vehicle::setMinSpeed(int data)
{
	minSpeed = data;
}
void Vehicle::setCurrentSpeed(double data)
{
	currentSpeed = data;
}
void Vehicle::setTraction(int data)
{
	traction = data;
}
void Vehicle::setWeight(int data)
{
	weight = data;
}
void Vehicle::setBrakePower(int data)
{
	brakePower = data;
}
void Vehicle::setLeangth(int data)
{
	leangth = data;
}
void Vehicle::setWidth(int data)
{
	width = data;
}
void Vehicle::setHazardRating(int data)
{
	hazardRating = data;
}
void Vehicle::setLongitude(double data)
{
	longitude = data;
}
void Vehicle::setLatitude(double data)
{
	latitude = data;
}
void Vehicle::setAcceleration(double data)
{
	acceleration = data;
}
void Vehicle::setEmergencyVehicle(bool data)
{
	emergencyVehicle = data;
}
void Vehicle::setOverSized(bool data)
{
	overSized = data;
}
string Vehicle::getKind()
{
	return kind;
}
int Vehicle::getMaxSpeed()
{
	return maxSpeed;
}
int Vehicle::getMinSpeed()
{
	return minSpeed;
}
double Vehicle::getCurrentSpeed()
{
	return currentSpeed;
}
int Vehicle::getTraction()
{
	return traction;
}
int Vehicle::getWeight()
{
	return weight;
}
int Vehicle::getBrakePower()
{
	return brakePower;
}
int Vehicle::getLeangth()
{
	return leangth;
}
int Vehicle::getWidth()
{
	return width;
}
int Vehicle::getHazardRating()
{
	return hazardRating;
}
double Vehicle::getLongitude()
{
	return longitude;
}
double Vehicle::getLatitude()
{
	return latitude;
}
double Vehicle::getAcceleration()
{
	return acceleration;
}
bool Vehicle::getEmergencyVehicle()
{
	return emergencyVehicle;
}
bool Vehicle::getOverSized()
{
	return overSized;
}


ostream &operator<<(ostream &output, Vehicle lorry)
{
	output << "speed		acceleration	  longitude\n";
	output << lorry.currentSpeed << setw(20) << lorry.acceleration << setw(20) << lorry.longitude << endl;
	return output;
}
