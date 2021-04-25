#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
protected:
	int doors;
public:
	//Default constructor
	Car() : Vehicle()
	{ doors = 0; }
	
	//Constructor
	Car(string m, int y, int d) : Vehicle(m, y)
	{ doors = d; }

	//Prints the contents of the object
	void displayInfo();
};

#endif
