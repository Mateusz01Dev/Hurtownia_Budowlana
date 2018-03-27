#pragma once

#include <iostream>

#include "Network_Building_Wholesalers.h"

using namespace std;

class Building_Wholesaler : public Network_Building_Wholesalers {

	string owner_name;
	string products;
	int magazine_availability;
	string additional_option;


public:

	Building_Wholesaler();

	Building_Wholesaler(string o, string p, int ma, string ao);

	void setOwner_name(string o);
	void setProducts(string p);
	void setMagazine_availabilty(int ma);
	void setAdditional_option(string ao);

	string getOwner_name();
	string getProducts();
	int getMagazine_availabilty();
	string getAdditional_option();
	
};

class Building_Wholesaler2 : public Network_Building_Wholesalers2 {

	string owner_name;
	string products;
	int magazine_availability;
	string additional_option;


public:

	Building_Wholesaler2();

	Building_Wholesaler2(string o, string p, int ma, string ao);

	void setOwner_name(string o);
	void setProducts(string p);
	void setMagazine_availabilty(int ma);
	void setAdditional_option(string ao);

	string getOwner_name();
	string getProducts();
	int getMagazine_availabilty();
	string getAdditional_option();

};
