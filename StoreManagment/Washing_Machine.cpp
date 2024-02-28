#include <iostream>
#include "Washing_Machine.h"

using namespace std;

Washing_Machine::Washing_Machine(int type, string manufacture, int price, int rpm, int load) : Store (type,manufacture,price)
{
	this->rpm = rpm;
	this->load = load;
}

void Washing_Machine::display() {
	Store::display();
	cout << "Maximum rpm's: " << rpm << endl;
	cout << "Load capacity: " << load << "L" << endl;
}
