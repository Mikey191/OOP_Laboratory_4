#pragma once
#include <string>
#include <iostream>
#include "Human.h"
#include "Flat.h"
class House
{
private:
	char Street[20];
	int HouseNumber;
	Flat* ArrFlat;
	int AmountFlat;
public:
	House(char* Street, int HouseNumber, int AmountFlat) :
		HouseNumber(HouseNumber),
		AmountFlat(AmountFlat)
	{
		strcpy_s(this->Street, 20, Street);

		ArrFlat = new Flat[AmountFlat];
		for (int i = 0; i < AmountFlat; i++)
		{
			ArrFlat[i].InputFlat();
		}
	}
	void PrintHouse();
	~House() { cout << "des House..." << endl; delete[] ArrFlat; }
};

