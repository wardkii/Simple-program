#pragma once
#include <iostream>
#include "Pomocny.h"
#include <conio.h>

using namespace std;

class games
{
public:
	int vyska = 20;
	int dlzka = 20;
	int score;
	int ovociex;
	int ovociey;
	bool Gameover;
	int A, B;
	enum Moznesmery
	{
		HORE, DOLE, VPRAVO, VLAVO, STOJ
	};
	Moznesmery smer;


	void Start()
	{
		smer = STOJ;
		Gameover = false;
		A = dlzka/2;
		B = vyska/2;
		score = 0;
		ovociex = rand() % 20 + 1;
		ovociey = rand() % 20 + 1;
	}


	void logika()
	{
		if(A == 0 || A == dlzka || B == 0 || B == vyska +1)
		{
			Gameover = true;
			cout << "Chces znova ? ak ano stlac napis ano" << endl;
			string x;
			cin >> x;
			if (x == "ano")
			{
				Main();
			}
		}
		switch (smer)
		{
		case VLAVO :
			A--;
			break;
		case VPRAVO:
			A++;
			break;
		case DOLE:
			B++;
			break;
		case HORE:
			B--;
			break;
		}
		if (ovociex == A && ovociey == B) 
		{
			ovociex = rand() % 20 + 1;
			ovociey = rand() % 20 + 1;
			score++;
		}
	}


	void input()
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'a':
				smer = VLAVO;
				break;
			case 'd':
				smer = VPRAVO;
				break;
			case 'w':
				smer = HORE;
				break;
			case 's':
				smer = DOLE;
				break;
			case 'k':
				Gameover = true;
				break;
			}
		}
	}

	void draw()
	{
		system("cls");

		for (int x = 1; x <= dlzka+1; x++)
		{
			cout << '#';
		}
		cout << endl;

		for (int y = 1; y <= vyska; y++)
		{
			for (int x = 1; x <= dlzka; x++)
			{
				bool placedP = false;
				bool placedO = false;
				if (x == 1)
				{
					cout << '#';
				}
				if (x == A && y == B)
				{
					cout << 'P';
					placedP = true;
				}
				if (x == ovociex && y == ovociey)
				{
					cout << 'O';
					placedO = true;
				}
				if (x == dlzka)
				{
					cout << '#';
				}
				if (placedP == false && placedO == false)
				{
					cout << ' ';
				}
			}
			cout << endl;
		}

		for (int x = 1; x <= dlzka+1; x++)
		{
			cout << '#';
		}
		cout << endl;
		cout << "  score : " << score << endl;
	}

	void Main() 
	{
		Start();
		while (Gameover == false)
		{
			input();
			logika();
			draw();
		}
	}
	
};