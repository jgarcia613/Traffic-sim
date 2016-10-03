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
	vector <Signal> trafficLight(10);
	int distance = 50;

	fin.open("signal.txt");			//opens signal file. uses space delimiation (default)

	if (fin.fail())					//if it does not open the file it lets you know.
	{
		cout << "file didn't open" << endl;
		system("pause");
	}
	for (int i = 0; !fin.fail(); i++)		//fills vector using my filling method
	{
		trafficLight[i].vectorFill(fin);
	}

	cout <<  "Location |" << setw(20) << "Latitude |" << setw(20) << "Longitude |" << setw(20) << "Start Time |" << setw(20) << "End Time |" << setw(20) << "South Bound Count |" <<
		setw(20) << "West Bount Count |" << setw(20) << "North Bound Count |" << setw(20) << "East Bound Count |" << endl;

		
	for (int i = 0; i < 10; i++)		//prints vector
	{
		trafficLight[i].printVector();
	}
	fin.close();
	

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
