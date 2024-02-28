#pragma once
#include "Base.h"

class User : public Base {
	int age;
	string address;
public:
	User(int type,string email,string password,string firstName,string lastName,int age, string address);

	void display();
};