#include <iostream>

#include <Windows.h>

#include <conio.h>

#include <string>



#include "All_Class.h"

using namespace std;

void main() {

	cout << "Witam, ponizej znajduje sie dzisiejsza data oraz aktualny czas\n" << endl;

	system("date/t");
	system("time/t");

	cout << endl << "Aby przejsc dalej wcisnij dowolny klawisz";

	_getche();

	cout << "Wybierz jedn¹ z ponizszych opcji: \n" << endl;

	cout << "a - lista klientow \n" << endl << "b - lista hurtowni budowlanych \n" << endl;


	Client person;

	Client2 person2;


	Network_Building_Wholesalers brand;

	Network_Building_Wholesalers2 brand2;

	Building_Wholesaler brands1;

	Building_Wholesaler2 brands2;

	string a;

	cin >> a;


	if (a == "a")

		cout << "Imie: " << person.getName() << endl << "Nazwisko: " << person.getSurname() << endl << "Rok urodzenia: " << person.getDate().getYear() << endl << "Miasto zamieszkania: " << person.getAdress().getCity() << endl << "Telefon: " << person.getPhone_number() << endl << endl << "Imie: " << person2.getName() << endl << "Nazwisko: " << person2.getSurname() << endl << "Rok urodzenia: " << person2.getDate().getYear() << endl << person2.getAdress().getCity() << endl << "Telefon: " << person2.getPhone_number() << endl;

	else if (a == "b")

		cout << "Nazwa firmy: " << brand.getBrand_name() << endl << "Kraj pochodzenia firmy: " << brand.getAdress().getCountry() << endl << "NIP firmy: " << brand.getNip() << endl << endl << "Nazwa firmy: " << brand2.getBrand_name() << endl << "Kraj pochodzenia firmy: " << brand2.getAdress().getCountry() << endl << "NIP firmy: " << brand2.getNip() << endl;

	else

		cout << "B³êdne polecenie. Zamykam symulator \n" << endl;

	cout << endl << "Nacisnij dowolny klawisz, aby kontynuowac \n" << endl;


	_getch();


	cout << endl << "Wybierz jedna z ponizszych opcji: \n" << endl;

	cout << "c - ilosc zakupionego towaru przez klientow przez ostatnie 7 dni \n" << endl << "d - szczegoly dotyczace hurtowni Brand 1 \n" << endl << "e - szczegoly dotyczace hurtowni Brand 2: \n " << endl;

	
	string b;
	
	cin >> b;

	if (b == "c")

		cout << "Przez ostatnie 7 dni klienci zakupili 120 sztuk towaru \n" << endl;

	else if (b == "d")

		cout << "Nazwa firmy: " << brands1.getBrand_name() << endl << "Wlascicel: " << brands1.getOwner_name() << endl << "Stan magazynowy ( w sztukach ): " << brands1.getMagazine_availabilty() << endl << "Opcja dodatkowa: " << brands1.getAdditional_option() << endl;

	else if (b == "e")

		cout << "Nazwa firmy: " << brands2.getBrand_name() << endl << "Wlasciciel: " << brands2.getOwner_name() << endl << "Stan magazynowy ( w sztukach ): " << brands2.getMagazine_availabilty ()<< endl << "Opcja dodatkowa: " << brands2.getAdditional_option() << endl;

	else

		cout << "Bledne polecenie. Zamykam symulator" << endl;

	cout << endl << "Dziekuje za skorzystanie z symulatora. Aby zamknac program wcisnij dowolny klawisz" << endl;


	system("PAUSE");

}