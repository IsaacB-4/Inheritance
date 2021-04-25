#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
protected:
	int capacity;
public:
	//Default constructor
	Truck() : Vehicle()
	{
		capacity = 0;
	}

	//Constructor
	Truck(string m, int y, int d) : Vehicle(m, y)
	{
		capacity = d;
	}

	//Prints the contents of the object
	void displayInfo();
};

#endif