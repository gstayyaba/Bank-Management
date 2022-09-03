#include "stdafx.h"
#include "Saving.h"

Saving::Saving() :Account(){}
Saving::Saving(string b, string c, string d, string e,string f, double g):Account(b, c, d, e, f, g) {}

void Saving::calculateInterest() {
	interest = (6 / 100)*getAmount();
	cout << interest << "$ will be added in your account after a month.\n";
}

void Saving::print() {
	cout << "Account No:  " << getAccNo();
	Person::print();
	cout << "Balance:     " << getAmount() << "$\n";
	cout << "Interest:    " << interest;
}
Saving::~Saving() {}