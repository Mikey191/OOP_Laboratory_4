#pragma once
#include <string>
#include <iostream>
using namespace std;
class Human
{
private:
	char* Name;
	int NameSize;
	//static int AmountHuman;
public:
	Human() :
		Name(new char[100]),
		NameSize(100)
	{
		//AmountHuman++;
		cout << "const #1" << endl;
	}

	Human(char* Name):
		Name(new char[strlen(Name)+1]),
		NameSize(strlen(Name))
	{
		for (int i = 0; i <= strlen(Name); i++)
		{
			this->Name[i] = Name[i];
		}
		//AmountHuman++;
		cout << "Const #3..." << endl;
	}

	Human(const Human& tempName) :
		Name(new char[tempName.NameSize + 1]),
		NameSize(tempName.NameSize)
	{
		for (int i = 0; i <= tempName.NameSize; i++)
		{
			Name[i] = tempName.Name[i];
		}
		cout << "Const copy...";
	}

	~Human() { delete[] Name; }
	void print() { cout << Name << endl; }
	void input() { cout << "Name: "; cin >> Name; }
	//static void PrintAmount() { cout << "Amount all human: " << AmountHuman << endl; }
};

//int Human::AmountHuman = 0;

