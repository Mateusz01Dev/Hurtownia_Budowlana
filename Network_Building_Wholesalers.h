#pragma once

#include <iostream>

#include "Adress.h"

using namespace std;

class Network_Building_Wholesalers {

	string brand_name;
	long long nip;
	Adress brand_adress;

public:

	Network_Building_Wholesalers();

	Network_Building_Wholesalers(string bn, long long n, Adress ba);

	void setBrand_name(string bn);
	void setNip(long long n);
	void setAdress(Adress ba);

	string getBrand_name();
	long long getNip();
	Adress getAdress();

};

class Network_Building_Wholesalers2 {

	string brand_name;
	long long nip;
	Adress brand_adress;

public:

	Network_Building_Wholesalers2();

	Network_Building_Wholesalers2(string bn, long long n, Adress ba);

	void setBrand_name(string bn);
	void setNip(long long n);
	void setAdress(Adress ba);

	string getBrand_name();
	long long getNip();
	Adress getAdress();

};