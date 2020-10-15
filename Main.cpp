#include <iostream>
#include "Pomocny.h"
#include "Games.h"
#include "Obchod.h"
#include "Skola.h"
	
using namespace std;


int main() 
{
	Hlavne fuck;
	games off;
	Obchod you;
	Cvicenia gay;
	system("cls");
	cout << "                                               skola" << endl;
	cout << "                                                    " << endl;
	cout << "                                              ostatne : ";
	string x;
	cin >> x;
	if (x == "skola")
	{
		gay.Prvecvicenie();
	}
	if (x == "ostatne")
	{
		fuck.Zaciatok();
	}
}