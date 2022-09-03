#ifndef Employee_h
#define Employee_h


#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Employee :public Person
{
private:
	string position;
	double salary;
public:
	Employee();
	Employee(string, string, string, string, string, double);
	Employee(const Employee &e);

	void setPosition(string);
	void setSalary(double);

	string getPosition();
	double getSalary();
	
	void print();

	~Employee();




};


#endif
