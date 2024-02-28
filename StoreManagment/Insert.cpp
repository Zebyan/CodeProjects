#include "Insert.h"

void Insert(List& l, int x)
{
	Store* store;
	int type;
	string manufacture="";
	int price=0;
	int power=0;
	int water_consumption=0;
	int capacity=0;
	int rpm=0;
	int load=0;
	cout << "Type in The Manufacture Name: "; cin >> manufacture;


	try {
		while ((cout << "Type in The Price: ") && !(cin >> price))
		{
			cout << "That's not a valid input !!! \n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}



		if (price < 0)
		{

			throw MyException("The price needs to be a positive number!!!", price);
		}
	}
	catch (MyException e) { // Prinde eroarea
		do {
			cout << "Type in The Price : ";
			while ((cout << "Type in a Positive Number : ") && !(cin >> price))
			{
				cout << "That's not a valid input !!! \n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

			}
		} while (price < 0);
	}


	if (x == 0)
	{
		Dishwasher* dishwasher;
		try {
			while ((cout << "Type in The Power: ") && !(cin >> power))
			{
				cout << "That's not a valid input !!! \n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

			}



			if (power < 0)
			{

				throw MyException("The power needs to be a positive number!!!", power);
			}
		}
		catch (MyException e) { // Prinde eroarea
			do {
				while ((cout << "Type in The Power : ") && !(cin >> power))
				{
					cout << "That's not a valid input !!! \n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			} while (power < 0);
		}


		try {
			while ((cout << "Type in The Water Consumption: ") && !(cin >> water_consumption))
			{
				cout << "That's not a valid input !!! \n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

			}



			if (water_consumption < 0)
			{

				throw MyException("The water consumption needs to be a positive number!!!", water_consumption);
			}
		}
		catch (MyException e) { // Prinde eroarea
			do {
				while ((cout << "Type in The Water Consumption : ") && !(cin >> water_consumption))
				{
					cout << "That's not a valid input !!! \n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			} while (water_consumption < 0);
		}


		try {
			while ((cout << "Type in The Capacity: ") && !(cin >> capacity))
			{
				cout << "That's not a valid input !!! \n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

			}



			if (capacity < 0)
			{

				throw MyException("The capacity needs to be a positive number!!!", capacity);
			}
		}
		catch (MyException e) { // Prinde eroarea
			do {
				while ((cout << "Type in The Capacity : ") && !(cin >> capacity))
				{
					cout << "That's not a valid input !!! \n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			} while (capacity < 0);
		}

		cout << capacity << endl;

		dishwasher = new Dishwasher(0,manufacture,price, power, water_consumption, capacity);
		store = dishwasher;
		l.addList(store);

	}
	else if (x == 1)
	{
		Washing_Machine* washing_machine;


		try {
			while ((cout << "Type in The RPM: ") && !(cin >> rpm))
			{
				cout << "That's not a valid input !!! \n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

			}



			if (rpm < 0)
			{

				throw MyException("The RPM needs to be a positive number!!!", rpm);
			}
		}
		catch (MyException e) { // Prinde eroarea
			do {
				while ((cout << "Type in The RPM : ") && !(cin >> rpm))
				{
					cout << "That's not a valid input !!! \n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			} while (rpm < 0);
		}


		try {
			while ((cout << "Type in The Load Capacity: ") && !(cin >> load))
			{
				cout << "That's not a valid input !!! \n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

			}



			if (load < 0)
			{

				throw MyException("The load capacity needs to be a positive number!!!", load);
			}
		}
		catch (MyException e) { // Prinde eroarea
			do {
				while ((cout << "Type in The Load Capacity : ") && !(cin >> load))
				{
					cout << "That's not a valid input !!! \n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			} while (load < 0);
		}


		washing_machine = new Washing_Machine(1, manufacture, price, rpm, load);
		store = washing_machine;
		l.addList(store);
	}
}
