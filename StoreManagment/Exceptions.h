#pragma once
#include <iostream>
#include <string>

using namespace std;

class MyException {
public:
	string str_what;
	int what;
	MyException() { str_what = "0"; what = 0; }
	MyException(string s, int e)
	{
		str_what = s;
		what = e;
	}
};