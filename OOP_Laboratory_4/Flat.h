#pragma once
#include <string>
#include <iostream>
#include "Human.h"
class Flat
{
private:
	int FlatNumber;
	Human* ArrHuman;
	int AmountHuman;
	//static int AmountFlat;
public:
	Flat() :
		FlatNumber(0),
		ArrHuman(new Human[0]),
		AmountHuman(0)
	{}

	Flat(int FlatNumber, int AmountHuman) :
		FlatNumber(FlatNumber),
		AmountHuman(AmountHuman)
	{
		ArrHuman = new Human[AmountHuman];

		for (int i = 0; i < AmountHuman; i++)
		{
			ArrHuman[i].input();
		}
		//AmountFlat++;
	}

	Flat(const Flat& tempFlat) :
		FlatNumber(tempFlat.FlatNumber),
		ArrHuman(new Human[tempFlat.AmountHuman + 1])
	{
		for (int i = 0; i < tempFlat.AmountHuman; i++)
		{
			ArrHuman[i] = tempFlat.ArrHuman[i];
		}
		cout << "Const copy..." << endl;
	}

	~Flat() { cout << "des Flat..." << endl; delete[] ArrHuman; }
	void PrintFlat();
	void InputFlat();
};

//int Flat::AmountFlat = 0;