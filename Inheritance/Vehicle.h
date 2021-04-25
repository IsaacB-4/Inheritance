#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	//constructor
	Vehicle(string m, int y)
		{ manufacturer = m;
		  year = y; }
	//prints the contents of the object
	void displayInfo();
};

#endif