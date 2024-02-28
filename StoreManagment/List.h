#pragma once
#include <iostream>
#include <fstream>
#include "Store.h"
#include "Dishwasher.h"
#include "Washing_Machine.h"

using namespace std;

class List {
public:
	Store* head;

	void addList(Store* a);

	void display_List();

	void display_subclass(int x);

	void write_to_file();
};