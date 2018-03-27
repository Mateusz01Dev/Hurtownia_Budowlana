#include "Building_Wholesaler.h"

Building_Wholesaler::Building_Wholesaler()
{

	//cout << "Dziala konstruktor klasy Building_Wholesaler bez argumentów \n" << endl;

	owner_name = "Roman Os";
	products = "Gips budowlany, gladz szpachlowa, grunt, wylewka samopoziomuj¹ca";
	magazine_availability = 500;
	additional_option = "Mozliwosc przechowania zakupionego towaru przez 7 dni";

}

Building_Wholesaler::Building_Wholesaler(string o, string p, int ma, string ao)
{

	//cout << "Dziala konstruktor klasy Building_availability z argumentami \n" << endl;

}

void Building_Wholesaler::setOwner_name(string o)
{

	owner_name = o;

}

void Building_Wholesaler::setProducts(string p)
{

	products = p;

}

void Building_Wholesaler::setMagazine_availabilty(int ma)
{

	magazine_availability = ma;

}

void Building_Wholesaler::setAdditional_option(string ao)
{

	additional_option = ao;

}


string Building_Wholesaler::getOwner_name()
{

	return owner_name;

}

string Building_Wholesaler::getProducts()
{

	return products;

}

int Building_Wholesaler::getMagazine_availabilty()
{

	return magazine_availability;

}

string Building_Wholesaler::getAdditional_option()
{

	return additional_option;

}


Building_Wholesaler2::Building_Wholesaler2()
{

	//cout << "Dziala konstruktor klasy Building_Wholesaler bez argumentow \n" << endl;

	owner_name = "Marcin As";
	products = "Drabina trzy-czêœciowa, szpachla do drewna, plyta GK";
	magazine_availability = 800;
	additional_option = "Darmowy transport do 10 km";

}

Building_Wholesaler2::Building_Wholesaler2(string o, string p, int ma, string ao)
{

	//cout << "Dziala konstruktor klasy Building_Wholesaler z argumentami \n" << endl;

}

void Building_Wholesaler2::setOwner_name(string o)
{

	owner_name = o;

}

void Building_Wholesaler2::setProducts(string p)
{

	products = p;

}

void Building_Wholesaler2::setMagazine_availabilty(int ma)
{

	magazine_availability = ma;

}

void Building_Wholesaler2::setAdditional_option(string ao)
{

	additional_option = ao;

}

string Building_Wholesaler2::getOwner_name()
{

	return owner_name;

}

string Building_Wholesaler2::getProducts()
{

	return products;

}

int Building_Wholesaler2::getMagazine_availabilty()
{

	return magazine_availability;

}

string Building_Wholesaler2::getAdditional_option()
{

	return additional_option;

}
