#include "Functionality.h"
#include <fstream>
#include <sstream>

void addUser(list<Base*>& base)
{
	string email, password, firstName, lastName, address;
	int age;
	cout << "Enter Your Email Address:"; cin >> email;
	cout << "Enter Your Password: "; cin >> password;
	cout << "Enter Your First Name: "; cin >> firstName;
	cout << "Enter Your Last Name: "; cin >> lastName;
	cout << "Enter Your Age: "; cin >> age;
	cout << "Enter Your Address: "; cin >> address;
	base.push_back(new User(0, email, password, firstName, lastName, age, address));
}

void addManager(list<Base*>& base)
{
	string email, password, firstName, lastName, department;
	int experience;
	cout << "Enter Your Email Address:"; cin >> email;
	cout << "Enter Your Password: "; cin >> password;
	cout << "Enter Your First Name: "; cin >> firstName;
	cout << "Enter Your Last Name: "; cin >> lastName;
	cout << "Enter The Department: "; cin >> department;
	cout << "Enter Your Experience: "; cin >> experience;
	base.push_back(new Manager(1, email, password, firstName, lastName, department, experience));
}

void remove(list<Base*>& base)
{
	string email;
	cout << "Enter The Person You Want To Remove: "; cin >> email;

	for (auto it = base.begin(); it != base.end(); ++it)
	{
		if ((*it)->getEmail() == email)
		{
			delete* it;
			base.erase(it);
			cout << "Email " << email << " Was Removed! " << endl;
			return;
		}
	}
}

void readFile(list<Base*>& base, string fileName)
{
	ifstream file(fileName);
	if (!file.is_open())
	{
		cerr << "File" << fileName << " Can't Be Opened!" << endl;
		return;
	}
	string line;
	while (getline(file,line))
	{
		istringstream iss(line);
		string email, password, firstName, lastName,data;
		string type;
		if (getline(iss,type,','))
		{
			if (type == "User")
			{
				int age;
				string address;
				if (getline(iss, email, ',') && getline(iss, password, ',') && getline(iss, firstName, ',') && getline(iss, lastName, ',') && getline(iss,data,',') && getline(iss,address,','))
				{
					age = stoi(data);
					base.push_back(new User(0, email, password, firstName, lastName, age, address));
				}
			}
			else if (type == "Manager")
			{
				string department;
				int experience;
				if (getline(iss, email, ',') && getline(iss, password, ',') && getline(iss, firstName, ',') && getline(iss, lastName, ',') && getline(iss,department,',') && getline (iss,data,','))
				{
					experience = stoi(data);
					base.push_back(new Manager(1, email, password, firstName, lastName, department, experience));
				}
			}
		}
	}
	cout << "Information Was Succesfully Imported" << endl;
	file.close();
}
