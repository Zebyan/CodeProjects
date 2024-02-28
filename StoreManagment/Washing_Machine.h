#pragma once
#include <iostream>
#include "Store.h"

using namespace std;

class Washing_Machine : public Store{
	int rpm;
	int load;
public:
	Washing_Machine(int, string, int, int, int);

	void display();

	friend class List;
};