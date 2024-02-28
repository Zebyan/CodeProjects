#include "Base.h"
#include "Functionality.h"

int main()
{
	list <Base*> base;
	int option;
	do
	{
		cout << "__________________________________________________________________________________" << endl;
		cout << "1.Add User" << endl;
		cout << "2.Add Manager" << endl;
		cout << "3.Display" << endl;
		cout << "4.Remove" << endl;
		cout << "5.Import Info From File" << endl;
		cout << "0.Exit" << endl;
		cout << "Enter Your Choice:"; cin >> option;
		switch (option)
		{
		case 0:
			break;
		case 1:
			addUser(base);
			break;
		case 2:
			addManager(base);
		case 3:
			for (auto &it : base)
			{
				cout << endl;
				it->display();
			}
			break;
		case 4:
			remove(base);
			break;
		case 5:
			readFile(base, "data.csv");
			break;
		default:
			cout << "That Is A Wrong Option " << endl;
			break;
		}
	} while (option != 0);
	return 0;
}