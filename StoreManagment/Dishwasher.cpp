#include <iostream> 
#include "Dishwasher.h"

using namespace std;

Dishwasher::Dishwasher(int type, string manufacture, int price, int power, int water_consumption, int capacity)
	: Store(type, manufacture, price)
{
	this->power = power;
	this->water_consumption = water_consumption;
	this->capacity = capacity;
}

void Dishwasher::display()
{
	Store::display();
	cout << "Power: " << power << "W" << endl;
	cout << "Water Consumption: " << water_consumption << "L" << endl;
	cout << "Capacity: " << capacity << " sets" << endl;
}

