#pragma once
#include "Base.h"

class Manager : public Base {
	string department;
	int experience;
public:
	Manager(int type, string email, string password, string firstName, string lastName, string department, int experience);

	void display();
};