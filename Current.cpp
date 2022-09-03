#include "stdafx.h"
#include "Current.h"

Current::Current() :Account() {}
Current::Current(string b, string c, string d, string e, string f, double g) : Account(b, c, d, e, f, g) {}


void Current::print() {
	cout << "Account No:  " << getAccNo();
	Person::print();
	cout << "Balance:     " << getAmount() << "$\n";
}
Current::~Current() {}