#pragma once
#include <iostream>
#include "Store.h"

using namespace std;

class Dishwasher : public Store {
	int power;
	int water_consumption;
	int capacity;
public:
	Dishwasher(int, string, int, int, int,int);

	void display();

	friend class List;
};