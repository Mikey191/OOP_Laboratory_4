#include "House.h"
#include "Flat.h"
#include "Human.h"
#include <iostream>
using namespace std;

void House::PrintHouse()
{
	cout << "\tHouse number: " << HouseNumber << endl;
	cout << "Street: " << Street << endl;
	for (int i = 0; i < AmountFlat; i++)
	{
		ArrFlat[i].PrintFlat();
	}
}
