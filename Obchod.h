#pragma once
#include "Games.h"
#include "Pomocny.h"
#include <iostream>

using namespace std;

class Obchod
{
public:
	void Rozhranie()
	{

	}
};

class ZoznamP
{
public:
	void novyP(string n, float c, string p)
	{
		name = n;
		CenaZaKg = c;
		Povod = p;
	}
private:
	string name;
	float CenaZaKg;
	string Povod;
};