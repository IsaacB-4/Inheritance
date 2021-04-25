#include "Vehicle.h"
#include <string>
#include <iostream>

void Vehicle::displayInfo()
{
	cout << "\nVehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
}