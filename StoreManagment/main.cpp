#include <iostream>
#include "List.h"
#include "Menu.h"
#include "Insert.h"
using namespace std;

int main()
{
	List l;
	int option;
	l.head = NULL;
	ifstream file("Stock.txt");
	string file_line;
	Store* store;
	do
	{
		Interactive_Menu();
		cin >> option;
		cout << endl;
		switch (option)
		{
		case 0:
			break;
		case 1:
			if (file.is_open())
			{
				while (getline(file,file_line))
				{
					cout << file_line << endl;
				}
				file.close();
			}
			else
			{
				cout << "The File Can't be Opened at this Moment\n";
			}
			break;
		case 2:
			Insert(l, 0);
			break;
		case 3:
			Insert(l, 1);
			break;
		case 4:
			l.display_List();
			break;
		case 5:
			l.display_subclass(0);
			break;
		case 6:
			l.display_subclass(1);
			break;
		case 7:
			l.write_to_file();
			break;
		default:
			cout << "That was an Invalid Option!!!\n";
			break;
		}

	} while (option !=0);
	return 0;
}