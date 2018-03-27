#include "Client.h"

Client::Client()
{

	//cout << "Dziala konstruktor klasy Client bez argumentow \n" << endl;

	name = "Jan";
	surname = "Kowalski";
	birthday = Date();
	phone_number = 222333444;

}

Client::Client(string n, string s, int pn, Date d, Adress a)
{

	//cout << "Dziala konstruktor klasy Client z argumentami \n" << endl;

}

void Client::setName(string n)
{

	name = n;

}

void Client::setSurname(string s)
{

	surname = s;

}

void Client::setPhone_number(int pn)
{

	phone_number = pn;

}

void Client::setDate(Date d)
{

	birthday = d;

}

void Client::setAdress(Adress a)
{

	client_adress = a;

}

string Client::getName()
{

	return name;

}

string Client::getSurname()
{

	return surname;

}

int Client::getPhone_number()
{

	return phone_number;

}

Date Client::getDate()
{

	return birthday;

}

Adress Client::getAdress()
{

	return client_adress;

}

Client2::Client2()
{

	//cout << "Dzia³¹ konstruktor klasy Clien2 bez argumentow \n" << endl;

	name = "Marcel";
	surname = "Nowak";
	birthday = Date();
	phone_number = 111222333;

}

Client2::Client2(string n, string s, int pn, Date d, Adress a)
{

	//cout << "Dziala konstruktor klasy Client2 z argumentami \n" << endl;

}

void Client2::setName(string n)
{

	name = n;

}

void Client2::setSurname(string s)
{

	surname = s;

}

void Client2::setPhone_number(int pn)
{

	phone_number = pn;

}

void Client2::setDate(Date d)
{

	birthday = d;

}

void Client2::setAdress(Adress a)
{

	client_adress = a;

}

string Client2::getName()
{

	return name;

}

string Client2::getSurname()
{

	return surname;

}

int Client2::getPhone_number()
{

	return phone_number;

}

Date Client2::getDate()
{

	return birthday;

}

Adress Client2::getAdress()
{

	return client_adress;

}
