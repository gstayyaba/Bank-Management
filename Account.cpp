#include "stdafx.h"
#include "Account.h"
using namespace std;

Account::Account():Person(),accNo(""), amount(0.0) {}
Account::Account(string a, string b, string c, string d, string e, double g) :Person(b, c, d, e), accNo(a), amount(g) {}

void Account::setAccNo(string a) { accNo = a; }
void Account::deposAmount(double c) { amount = amount + c; }
void Account::drawAmount(double d) {
	if (d > amount) {
		cout << "Debit amount increased from balance. Enter again.";
		cin >> d;
		amount = amount - d;
	}
	else
		amount = amount - d;
	if (d > 2500)
	{
		amount = amount - 50;
		cout << "50$ tax deducted";
	}
}

string Account::getAccNo() { return accNo; }
double Account::getAmount() { return amount; }

void Account::print() {}

Account::~Account(){}