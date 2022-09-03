#ifndef Account_h
#define Account_h


#include "Person.h"
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class Account:public Person 
{
private:
	string accNo;
	double amount;
public:

	Account();
	Account(string, string, string, string, string, double);
	
	void setAccNo(string);
	void deposAmount(double);
	void drawAmount(double);

	string getAccNo();
	double getAmount();

	virtual void print();
	~Account();

};

#endif