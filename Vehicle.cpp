/*_____________________________________________
Isaac Haas, Spence Wilson, Brian Choi, Alexander Tate, Christine Sobolewski, Michael Galzin
First output draft
September 22, 2016
_______________________________________________*/


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

Vehicle Vehicle::operator ++(int x)	// book pages for overloading 384-416   output operator in the 500 range
{
	currentSpeed = currentSpeed + acceleration / 3600;	//one second
	longitude += 0.001;
	if (currentSpeed > maxSpeed)
	{
		currentSpeed = maxSpeed;
	}
	return *this;
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

void Vehicle::setCurrentSpeed(double data)
{
	currentSpeed = data;
}
void Vehicle:: setDirection(double data)
{
	direction = data;
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
double Vehicle::getCurrentSpeed()
{
	return currentSpeed;
}
double Vehicle::getDirection()
{
	return direction;
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



/***************************************************************************** 
directionDegrees
return: direction of Vehicle in degrees
parameters: none
Converts direction from radians to degrees 
******************************************************************************/

double Vehicle::directionDegrees()
{
	return (direction / 3.141592654 * 180);
}



string Vehicle::calculateCardinalDirection()
{
	string cardinal = "Never Changed";
	if (direction >= (PI / 3) && direction <= (2 * PI / 3))
	{
		cardinal = "North";
	}
	else if (direction > (2 * PI / 3) && direction < (5 * PI / 6))
	{
		cardinal = "NorthWest";
	}
	else if (direction >= (5 * PI / 6) && direction <= (7 * PI / 6))
	{
		cardinal = "West";
	}
	else if (direction >(7 * PI / 6) && direction < (4 * PI / 3))
	{
		cardinal = "SouthWest";
	}
	else if (direction >= (4 * PI / 3) && direction <= (5 * PI / 3))
	{
		cardinal = "South";
	}
	else if (direction >(5 * PI / 3) && direction < (11 * PI / 6))
	{
		cardinal = "SouthEast";
	}
	else if (direction >=(11 * PI / 6) || direction <= (PI / 6))
	{
		cardinal = "East";
	}
	else if (direction >(PI / 6) && direction < (PI / 3))
	{
		cardinal = "NorthEast";
	}
	return cardinal;
}



/***************************************************Output Team*****************************************************
simplePrint
parameter: Vehicle for output
return: void
prints speed, acceleration, direction, and position
*******************************************************************************************************************/


ostream &operator<<(ostream &output, Vehicle lorry)				//overload << outputs all members of the class
{

	output << "Kind: " << lorry.kind << "\nMax Speed: " << lorry.maxSpeed << "\nMin Speed: " << lorry.minSpeed << "\nTraction: " << lorry.
		traction << "\nweight: " << lorry.weight << "\nbrakePower: " << lorry.brakePower << "\nlength: " << lorry.leangth << "\nwidth: " << lorry.width << "\nhazardRating: " << lorry.hazardRating << "\ncurrentSpeed: " << setprecision(1) << fixed << lorry.currentSpeed << "\ndirection (radian): " << setprecision(5) << lorry.direction << "\nlongitude: " << lorry.longitude << "\nlatitude: " << lorry.latitude << "\nacceleration: " << setprecision(1) << lorry.acceleration << "\nemergencyVehicle: ";
	
	if (lorry.emergencyVehicle == false ? cout << "False" : cout << "True")
		
		cout << "\noverSized: ";

	if (lorry.overSized == false ? cout << "False" : cout << "True")
	//cout << ((lorry.overSized == false) ? "false" : "true");

return output;
}

/***************************************************Output Team*****************************************************
simplePrint
parameter: Vehicle for output
return: void
prints speed, acceleration, direction, and position 
*******************************************************************************************************************/
void simplePrint(Vehicle lorry)									//outputs current speed, acceleration, direction, long, lat
{
	cout << "Current Speed: " << lorry.currentSpeed << " Acceleration: " << lorry.acceleration << " Direction(radians): " << lorry.direction << endl;
	cout << "Longitude: " << lorry.longitude << " Latitude: " << lorry.latitude << endl;
}



/***************************************************Output Team*****************************************************
directionPrint
parameter: Vehicle for output
return: void
prints the direction in degrees(East being 0, North being 90)
and the cardinal direction of the Vehicle 
*******************************************************************************************************************/
void directionPrint(Vehicle lorry)								//outputs direction degrees, and cardinal direction
{
	cout << "Direction(degrees): " << lorry.directionDegrees() << " Cardinal: " << lorry.calculateCardinalDirection() << endl;
}



/***************************************************Garbage, future use, or retired below*****************************************************/

//ostream &operator<<(ostream &output, Vehicle lorry)
//{
//	output << "speed		acceleration	  longitude\n";
//	output << lorry.currentSpeed << setw(20) << lorry.acceleration << setw(20) << lorry.longitude << endl;
//	return output;
//}




// These are mine  (Isaac Haas)***********************************************************

//double Vehicle::convertRadians(double numRadians)
//{
//	return (numRadians / 3.141592654 * 180);
//}

/* calculateCardinalDirection
parameters: none
return: the cardinal direction of the Vehicle
Assumes 0 radians is East, calculates the cardinal direction */

