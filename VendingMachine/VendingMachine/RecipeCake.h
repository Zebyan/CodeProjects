#pragma once
#include <iostream>

using namespace std;

class RecipeCake {
	string name;
	int time;
public:
	RecipeCake(string name, int time);

	//return name
	string getName();

	//return the time needed for the order
	int getTime();
};