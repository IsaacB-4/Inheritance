#include "Truck.h"
#include <string>
#include <iostream>

void Truck::displayInfo()
{
	cout << "\nVehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
	cout << "Towing capacity: " << capacity << endl;
}