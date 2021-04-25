//Isaac Booth
//CIS 1202 101
//April 25, 2021

#include "Vehicle.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Vehicle Program:\n\n";

	//Vehicle driver
	string manufacturer;
	int year;

	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: "; getline(cin, manufacturer);
	cout << "Enter the year built: "; cin >> year;
	Vehicle vehicle(manufacturer, year);
	vehicle.displayInfo();

	//Car driver
	int doors;

	cout << "\nCar:\n";
	cout << "Enter the manufacturer: "; cin >> ws; getline(cin, manufacturer);
	cout << "Enter the year built: "; cin >> year;
	cout << "Enter the number of doors: "; cin >> doors;
	Car car(manufacturer, year, doors);
	car.displayInfo();
}