#include "Adress.h"

Adress::Adress()
{

	//cout << "Dziala konstruktor klasy Adress bez argumentow \n" << endl;

	street = "Pogodna";
	number = 11;
	city = "Sopot";
	country = "Polska";

}

Adress::Adress(string s, int nr, string c, string cy)
{

	//cout << "Dziala konstruktor klasy Adress z argumentami \n" << endl;

	street = s;
	number = nr;
	city = c;
	country = cy;

}

void Adress::setStreet(string s)
{

	street = s;

}

void Adress::setNumber(int nr)
{

	number = nr;

}

void Adress::setCity(string c)
{

	city = c;

}

void Adress::setCountry(string cy)
{

	country = cy;

}

string Adress::getStreet()
{
	return street;
}

int Adress::getNumber()
{
	return number;
}

string Adress::getCity()
{
	return city;
}

string Adress::getCountry()
{
	return country;
}
