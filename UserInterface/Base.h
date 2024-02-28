#pragma once
#include <iostream>

using namespace std;

class Base {
	string email;
	string password;
	string firstName;
	string lastName;
public:
	int type;

	string getEmail();
	void setEmail(string);

	string getPassword();
	void setPassword(string);

	string getFirstName();
	void setFirstName(string);

	string getLastName();
	void setLastName(string);

	virtual void display() = 0;
};