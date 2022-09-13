//Встреча 4. Создайте квартиру имитирующую многоквартирный дом
//
#include <iostream>
#include "Flat.h"
#include "House.h"
#include "Human.h"
using namespace std;

int main()
{
	/*char temp[20];
	cout << "Enter Name:";
	cin >> temp;
	Human h1(temp);
	h1.print();

	Human h2;
	h2.input();
	h2.print();*/

	/*Flat f1(1, 3);
	f1.PrintFlat();*/

	char temp[20] = "Shogencukova";

	House H1(temp, 6, 2);
	H1.PrintHouse();

	return 0;
}
