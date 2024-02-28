#include "User.h"

User::User(int type, string email, string password, string firstName, string lastName, int age, string address)
{
	Base::type = 0;
	Base::setEmail(email);
	Base::setPassword(password);
	Base::setFirstName(firstName);
	Base::setLastName(lastName);
	this->age = age;
	this->address = address;
}

void User::display()
{
	cout << "Email: " << getEmail() << endl;
	cout << "Password: " << getPassword() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Age: " << age << " years" << endl;
	cout << "Address: " << address << endl;
}

