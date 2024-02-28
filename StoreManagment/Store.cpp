#include "Store.h"
#include <iostream>

using namespace std;

Store::Store(int type, string manufacture, int price)
{
	this->type = type;
	this->manufacture = manufacture;
	this->price = price;
	next = NULL;
}

void Store::display() {
	cout << "____________________________________________________________________________" << endl;
	cout << "Manufacture: " << manufacture << endl;
	cout << "Price: " << price << "$" << endl;
}