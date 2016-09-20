//******************
//Trafic Simulation
//******************
#include "Includes.h"

int timeOfDay = 0;

ostream &operator<<(ostream &output, Vehicle inputVehicle)
{
	output << "Time:\t\t12:" << timeOfDay << endl;
	output << "Model:\t\t" << inputVehicle.getModel() << endl;
	output << "Latitude:\t" << inputVehicle.getlatitude() << endl;
	output << "Longitude:\t" << inputVehicle.getLongitude() << endl;
	output << "Current Speed:\t" << inputVehicle.getCurrentSpeed() << endl;
	output << endl << endl;
	return output;
}

int main()
{
	Vehicle myCar(MIDSIZE);									//first create a car
	myCar.setlatitude(40.581503000);						//set its starting variables
	myCar.setLongitude(-105.062886);						//**
	myCar.setCurrentSpeed(1);								//**
	myCar.setAccelerationSpeed(3);							//**
	myCar.setbrakingSpeed(5);								//**
	myCar.setMaxSpeed(60);
	cout << myCar;
	myCar.setModel("Honda");
	myCar.setDirection(140);
	VehicleComputer carComputer(TIMEINCREMENT);
	//test the acceleration of the car
	cout << "Starting testAcceleration." << endl;			//prompt the users
	system("pause");
	for(int i = 0; i < 50; i++)
	{
		carComputer.moveVehicle(myCar);
		system("pause");
		system("cls");
		cout << myCar;
		timeOfDay++;
	}

	//Testing moving arrays full of cars
	Vehicle* testCars;
 	testCars = new Vehicle[5];
	for (int i = 0; i < sizeof(testCars); i++)
	{
		testCars[i].setlatitude(40.581503000);						//set its starting variables
		testCars[i].setLongitude(-105.062886);						//**
		testCars[i].setCurrentSpeed(1);								//**
		testCars[i].setAccelerationSpeed(3);						//**
		testCars[i].setbrakingSpeed(5);								//**
		testCars[i].setMaxSpeed(60);
		testCars[i].setModel("Honda");
		testCars[i].setDirection(140);
	}
	VehicleComputer carHub(TIMEINCREMENT);

	for (int i = 0; i < 50; i++)
	{

		carComputer.moveVehicle(testCars);

		system("pause");
 		
		for (int m = 0; m < sizeof(testCars); m++)
			cout << testCars[m];
		timeOfDay++;
	}
}
