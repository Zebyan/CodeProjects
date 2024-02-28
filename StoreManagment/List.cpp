#include <iostream>
#include <fstream>
#include "List.h"

using namespace std;

void List::addList(Store* new_node)
{
	Store* p;
	p = head;
	if (p)
	{
		if (new_node->price > p->price)
		{
			new_node->next = head;
			head = new_node;
		}
		else
		{
			while (p->next && (p->next->price > new_node->price))
			{
				p = p->next;
			}
			new_node->next = p->next;
			p->next = new_node;
		}
	}
	else
	{
		head = new_node;
	}
}

void List::display_List()
{
	Store* p;
	p = head;
	if (!p)
	{
		cout << "List is empty!!\n";
	}
	else
	{
		while (p)
		{
			p->display();
			p = p->next;
		}
	}
}

void List::display_subclass(int x)
{
	Store* p;
	p = head;
	if (!p)
	{
		cout << "List is empty\n";
	}
	else
	{
		while (p)
		{
			if (p->type == x)
			{
				p->display();
			}
			p = p->next;
		}
	}
}

void List::write_to_file() {
	ofstream write_file("Stock.txt", ofstream::app);
	Store* p;
	p = head;
	if (!p)
	{
		cout << "List is empty!!\n";
	}
	else
	{
		if (write_file.is_open())
		{
			while (p)
			{
				if (p->type == 0)
				{
					write_file << "Dishwasher  ";
				}
				else if (p->type == 1)
				{
					write_file << "Washing Machine  ";
				}
				write_file << p->manufacture << "  " << p->price << "$" << endl;
				if (p->type == 0)
				{
					Dishwasher* d = (Dishwasher*)p;
					write_file << "Power: " << d->power << "W" << endl;
					write_file << "Water Consumption: " << d->water_consumption << endl;
					write_file << "Capacity: " << d->capacity << "L" << endl;
				}
				else if (p->type == 1)
				{
					Washing_Machine* w = (Washing_Machine*)p;
					write_file << "Maxim rpm's: " << w->rpm << endl;
					write_file << "Load Capacity: " << w->load << endl;
				}
				write_file << "---------------------------------------------------------------------------------------" << endl;
				p = p->next;
			}
			write_file.close();
		}
	}
}