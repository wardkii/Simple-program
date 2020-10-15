#pragma once
#include "Obchod.h"
#include <iostream>
#include "Games.h"

using namespace std;

class Hlavne
{
public:
	void Zaciatok()
	{
		cout << "Ahoj, volam sa Ive" << endl;
		cout << "Moj stvoritel je Tomas krutek... uzasny clovek" << endl;
		cout << "No dobre k veci, co potrebujes?" << endl;
		cout << "Tu mas Na vyber : Hry" << endl;
		cout << "                  Obchod" << endl;
		string x;
		cin >> x;
		if (x == "Hry")
		{
			games gay;
			gay.Main();
		}
		if (x == "Obchod")
		{
			Obchod ou;
			ou.Rozhranie();
		}
	}
	void koniec()
	{
		cout << "Prajem pekny den a dovidenia <3" << endl;
	}
};



