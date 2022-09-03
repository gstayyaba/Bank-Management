#ifndef Bank_h
#define Bank_h


#include "Branch.h"
#include <string>
#include <vector>
#include <array>
#include <iostream>
using namespace std;

class Bank
{
private:
	string name;
	vector<Branch>b;
	int x;
	
public:
	Bank();
	Bank(string);

	void setName(string);
	string getName();

	void setBranch(Branch b1);

	void Menu();

	~Bank();
};


#endif // !Bank_h

