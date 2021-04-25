#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
protected:
	string manufacturer;
	int year;
public:
	//default constructor
	Vehicle()
	{ manufacturer = "";
	year = 0; }

	//constructor
	Vehicle(string m, int y)
	{ manufacturer = m;
	year = y; }

	//prints the contents of the object
	void displayInfo();
};

#endif