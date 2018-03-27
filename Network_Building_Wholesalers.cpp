#include "Network_Building_Wholesalers.h"

Network_Building_Wholesalers::Network_Building_Wholesalers()
{

	//cout << "Dzia³a konstruktor klasy Network_Building_Wholesalers bez argumentów \n" << endl;

	brand_name = "Brand A";
	nip = 1234567890;
	brand_adress = Adress();


}

Network_Building_Wholesalers::Network_Building_Wholesalers(string bn, long long n, Adress ba)
{

	//cout << "Dzia³a konstruktor klasy Network_Building_Wholesalers z argumentami \n" << endl;

}

void Network_Building_Wholesalers::setBrand_name(string bn)
{

	brand_name = bn;

}

void Network_Building_Wholesalers::setNip(long long n)
{

	nip = n;

}

void Network_Building_Wholesalers::setAdress(Adress ba)
{

	brand_adress = ba;

}

string Network_Building_Wholesalers::getBrand_name()
{

	return brand_name;

}

long long Network_Building_Wholesalers::getNip()
{

	return nip;

}

Adress Network_Building_Wholesalers::getAdress()
{

	return brand_adress;

}

Network_Building_Wholesalers2::Network_Building_Wholesalers2()
{

	//cout << "Dzia³a konstruktor klasy Network_Building_Wholesalers bez argumentów \n" << endl;

	brand_name = "Brand B";
	nip = 2468013579;
	brand_adress = Adress();

}

Network_Building_Wholesalers2::Network_Building_Wholesalers2(string bn, long long n, Adress ba)
{

	//cout << "Dzia³a konstruktor klasy Network_Building_Wholesalers z argumentami \n" << endl;

}

void Network_Building_Wholesalers2::setBrand_name(string bn)
{

	brand_name = bn;

}

void Network_Building_Wholesalers2::setNip(long long n)
{

	nip = n;

}

void Network_Building_Wholesalers2::setAdress(Adress ba)
{

	brand_adress = ba;

}

string Network_Building_Wholesalers2::getBrand_name()
{
	return brand_name;
}

long long Network_Building_Wholesalers2::getNip()
{
	return nip;
}

Adress Network_Building_Wholesalers2::getAdress()
{
	return brand_adress;
}
