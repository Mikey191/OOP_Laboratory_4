#include "Flat.h"
#include <iostream>
using namespace std;

void Flat::PrintFlat()
{
	cout << "Flat #" << FlatNumber << endl;
	for (int i = 0; i < AmountHuman; i++)
	{
		cout << "Human " << i + 1 << ": ";
		ArrHuman[i].print();
	}
}

void Flat::InputFlat()
{
	/*FlatNumber
	AmountHuman
	ArrHuman.input*/
	cout << "Enter flat number: ";
	cin >> this->FlatNumber;
	cout << "Amount human in this flat: ";
	cin >> this->AmountHuman;

	ArrHuman = new Human[AmountHuman];

	for (int i = 0; i < AmountHuman; i++)
	{
		ArrHuman[i].input();
	}
}
