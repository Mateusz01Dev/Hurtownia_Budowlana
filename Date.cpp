#include "Date.h"

Date::Date()
{

	//cout << "Dziala konstruktor klasy Date bez argumentow \n" << endl;

	day = 10;
	month = 10;
	year = 1990;

}

Date::Date(int d, int m, int y)
{

	//cout << "Dziala konstruktor klasy Date z argumentami \n" << endl;

	day = d;
	month = m;
	year = y;

}

void Date::setDay(int d)
{

	day = d;

}

void Date::setMonth(int m)
{

	month = m;

}

void Date::setYear(int y)
{

	year = y;

}

int Date::getDay()
{

	return day;

}

int Date::getMonth()
{

	return month;

}

int Date::getYear()
{

	return year;

}
