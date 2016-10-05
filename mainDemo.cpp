//Jaqueline Garcia, Andrew Byrne, David Sant
#include "Vehicle.h"
#include <iomanip>
#include <vector>
#include <fstream>
#include "Signal.h"
using namespace std;





int main()
{
	Vehicle one;
	Vehicle two("Train");
	ifstream fin;
	//vector of Signals, this is where I have my most trouble. If I do no declare a size I get a bunch of syntax errros. I would very much like to not declare a size
	//any ideas?
	//vector <Signal> trafficLight(10);	//when not declaring a size, do not leave behind the parenthesis.
	vector <Signal> trafficLight;		//like this
	int distance = 50;

	fin.open("signalDemo.txt");			//opens signal file. uses space delimiation (default)

	if (fin.fail())					//if it does not open the file it lets you know.
	{
		cout << "file didn't open" << endl;
		system("pause");
	}
	//for (int i = 0; !fin.fail(); i++)		this would not be the way to fill it. 
	//{
	//	trafficLight[i].vectorFill(fin);	if we use this method to fill the vector, it must have a predetermined size
	//						if no size is declared it tries to place an object in location 0, which does not
	//						exist.
	//}
							//instead we should use the constructer of the Signal class to read in data
	for (int i = 0; !fin.fail(); i++)		// !fin.fail() returns true as long as there is more data in the file. once it reaches the end
	{						//it returns false.
		trafficLight.push_back(fin);	
	}						// .push_back is a method of the vector class. which creates a new location on the vector and
							// then places the object (calling the constructor that contains the ifstream parameter) 
							//in the new location				

	cout <<  "Location |" << setw(20) << "Latitude |" << setw(20) << "Longitude |" << setw(20) << "Start Time |" << setw(20) << "End Time |" << setw(20) << "South Bound Count |" <<
		setw(20) << "West Bount Count |" << setw(20) << "North Bound Count |" << setw(20) << "East Bound Count |" << endl;

		
	for (int i = 0; i < trafficLight.size(); i++)	//prints vector using a for loop interator. .size() returns the size of the vector.
	{						//so no matter the size of the vector we will not iterate over the end
		trafficLight[i].printVector();		// a vector Iterator may work better in this situation.
	}
	fin.close();					//do not forget to close the file. resource leaks are bad.
	

//	cout << "speed		acceleration	  longitude\n";
	/*one.setMaxSpeed(150);
	one.setCurrentSpeed(60);
	one.setAcceleration(100);
	one.setLongitude(40.000);*/
//	cout << one.getCurrentSpeed() << setw(20) << one.getAcceleration() << setw(20) << one.getLongitude() << endl;
	//cout << one;
	//one++;
	//cout << one;// .getCurrentSpeed() << setw(15) << one.getAcceleration() << setw(20) << one.getLongitude() << endl;

	






	//vector<Vehicle> myList;
	//myList.push_back(one);
	//myList.push_back(one);

	////myList[0].setMaxSpeed(25);
	////cout << myList[0].getMaxSpeed() << endl;

	////myList[0].setMaxSpeed(150);
	////cout << myList[0].getMaxSpeed() << endl;

	////cout << myList[1].getKind() << endl;

	//vector<Vehicle>::iterator itsy;
	//itsy = myList.begin();

	//for (itsy = myList.begin(); itsy < myList.end(); itsy++)
	//{
	//	cout << itsy->getMaxSpeed() << endl;
	//}




	//one.setEmergencyVehicle(true);
	//one.setKind("Honda Civic");
	//one.setOverSized(true);

	//one.setAcceleration(1);		// These just set the values from  1-12 in order.
	//one.setBrakePower(2);		// Then they print in the same order to prove that it works.
	//one.setCurrentSpeed(3);
	//one.setHazardRating(4);
	//one.setLatitude(5);
	//one.setLeangth(6);
	//one.setLongitude(7);
	//one.setMaxSpeed(8);
	//one.setMinSpeed(9);
	//one.setTraction(10);
	//one.setWeight(11);
	//one.setWidth(12);

	//cout << one.getEmergencyVehicle() << "   " << one.getKind() << "   " << one.getOverSized() << endl;
	//cout << one.getAcceleration() << "   " << one.getBrakePower() << "   " << one.getCurrentSpeed();
	//cout << "   " << one.getHazardRating() << "   " << one.getLatitude() << "   " << one.getMaxSpeed();
	//cout << "   " << one.getMinSpeed() << "   " << one.getTraction() << "   " << one.getWeight();
	//cout << "   " << one.getWidth() << endl;

	//cout << endl << "Vehicle two type: " << two.getKind() << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}
