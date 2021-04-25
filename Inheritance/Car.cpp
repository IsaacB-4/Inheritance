#include "Car.h"
#include <string>
#include <iostream>

void Car::displayInfo()
{
	cout << "\nVehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
	cout << "Doors: " << doors << endl;
}
