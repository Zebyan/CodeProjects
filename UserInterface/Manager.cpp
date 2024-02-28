#include "Manager.h"

Manager::Manager(int type, string email, string password, string firstName, string lastName, string department, int experience)
{
	Base::type = 0;
	Base::setEmail(email);
	Base::setPassword(password);
	Base::setFirstName(firstName);
	Base::setLastName(lastName);
	this->department = department;
	this->experience = experience;
}

void Manager::display()
{
	cout << "Email: " << getEmail() << endl;
	cout << "Password: " << getPassword() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Department: " << department << endl;
	cout << "Experience: " << experience << " years" << endl;
}


