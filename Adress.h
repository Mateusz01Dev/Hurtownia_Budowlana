#pragma once

#include <iostream>

using namespace std;

class Adress {

	string street;
	int number;
	string city;
	string country;

public:

	Adress();
	Adress(string s, int nr, string c, string cy);

	void setStreet(string s);
	void setNumber(int nr);
	void setCity(string c);
	void setCountry(string cy);

	string getStreet();
	int getNumber();
	string getCity();
	string getCountry();

};
