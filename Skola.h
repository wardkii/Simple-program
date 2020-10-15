#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Cvicenia
{
public:
	void Prvecvicenie()
	{
		float a, b, c, obv, obs;

		cout << "Zadaj 1.odevesnu...";
		cin >> a;
		cout << "Zadaj 2.odvesnu ...";
		cin >> b;
		c = sqrt(a * a + b * b);
		cout << "prepona je " << c << endl;
		cout << "Obvod trojuholnika je " << a + b + c << endl;
		cout << "Obsah trojuholnika je " << (a * b) / 2 << endl;
	}
};