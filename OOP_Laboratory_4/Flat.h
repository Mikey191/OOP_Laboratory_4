#pragma once
#include <string>
#include <iostream>
#include "Human.h"
class Flat
{
private:
	int FlatNumber;
	Human* Arr;
	int AmountPeople;
	//static int AmountFlat;
public:
	Flat(int FlatNumber, int AmountPeople) :
		FlatNumber(FlatNumber),
		AmountPeople(AmountPeople)
	{
		Arr = new Human[AmountPeople];

		for (int i = 0; i < AmountPeople; i++)
		{
			Arr[i].input();
		}
		//AmountFlat++;
	}

	Flat(const Flat& tempFlat) :
		FlatNumber(tempFlat.FlatNumber),
		Arr(new Human[tempFlat.AmountPeople + 1])
	{
		for (int i = 0; i < tempFlat.AmountPeople; i++)
		{
			Arr[i] = tempFlat.Arr[i];
		}
		cout << "Const copy..." << endl;
	}

	~Flat() { cout << "Des..." << endl; delete[] Arr; }
};

//int Flat::AmountFlat = 0;