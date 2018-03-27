#pragma once

#include <iostream>

using namespace std;

class Date {

	int day;
	int month;
	int year;

public:

	Date();
    Date(int d, int m, int y);

	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	int getDay();
	int getMonth();
	int getYear();

};
