#pragma once
#include <string>
using namespace std;

class Store {
	int type;
	string manufacture;
	int price;
	Store* next;
public:
	Store(int, string, int);

	virtual void display();

	friend class List;
};