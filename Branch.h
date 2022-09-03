#ifndef Branch_h
#define Branch_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Employee.h"
#include "current.h"
#include "Saving.h"
#include "Account.h"

class Branch
{
private:
	string name;
	int i;
	int j;
	int k;
	int l;
	Account *a1;
	Account *a2;
	Employee *e;
public:
	Branch();
	Branch(string);

	void setName(string);
	string getName();

	void addAccount(Account, int);
	void searchAccount(int);
	void deleteAccount(int);
	void modifyAccount(int);

	void AddEmployee(Employee e1);
	void searchEmployee(string);
	void deleteEmployee(string);

	void EmployeeMenu();
	void AccountMenu();
	void displayMenu();
	~Branch();
};
#endif // !Branch_h

