#ifndef Saving_h
#define Saving_h

#include "Account.h"

class Saving:public Account
{
private:
	double interest;
public:
	Saving();
	Saving(string, string, string, string, string, double);
	void calculateInterest();
	void print();
	~Saving();

};
#endif
