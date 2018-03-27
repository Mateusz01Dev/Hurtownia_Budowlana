#pragma once

#include<iostream>

#include "Date.h"

#include "Adress.h"

using namespace std;


class Client {

	string name;
	string surname;
	int phone_number;
	Date birthday;
	Adress client_adress;


public:

	Client();
	Client(string n, string s, int pn, Date d, Adress a);

	void setName(string n);
	void setSurname(string s);
	void setPhone_number(int pn);
	void setDate(Date d);
	void setAdress(Adress a);

	string getName();
	string getSurname();
	int getPhone_number();
	Date getDate();
	Adress getAdress();



};

class Client2 {

	string name;
	string surname;
	int phone_number;
	Date birthday;
	Adress client_adress;

public:

	Client2();
	Client2(string n, string s, int pn, Date d, Adress a);

	void setName(string n);
	void setSurname(string s);
	void setPhone_number(int pn);
	void setDate(Date d);
	void setAdress(Adress a);

	string getName();
	string getSurname();
	int getPhone_number();
	Date getDate();
	Adress getAdress();
};

