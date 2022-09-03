#include "stdafx.h"
#include "Bank.h"

Bank::Bank():name(""), x(0){}
Bank::Bank(string a) : name(a) { x = 0; }

void Bank::setName(string name)
{
	this->name = name;
}
string Bank::getName()
{
	return name;
}
void Bank::Menu() {
	int a = 0;
	cout << "1. Employee\n2. Account\n3. Display\nEnter your choice: ";
	cin >> a;
	if (a == 1) {
		cout << "Choose Branch:\n";
		for (int i = 0; i < b.size(); i++)
		{
			cout << i + 1 << ". " << b[i].getName() << endl;
		}
		cin >> x;
		b[x - 1].EmployeeMenu();
	}
	else if (a == 2) {
		for (int i = 0; i < b.size(); i++)
		{
			cout << i + 1 << ". " << b[i].getName() << endl;
		}
		cout << "Enter your choice: ";
		cin >> x;
		b[x - 1].AccountMenu();
	}
	else if (a == 3){
		cout << "     Choose Branch:\n";
		for (int i = 0; i < b.size(); i++)
		{
			cout << i + 1 << ". " << b[i].getName() << endl;
		}
		cin >> x;
		b[x - 1].displayMenu();
	}
}
void Bank::setBranch(Branch b1) { b.push_back(b1); }

Bank::~Bank(){}
