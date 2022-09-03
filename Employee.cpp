#include "stdafx.h"
#include "Employee.h"
using namespace std;

Employee::Employee():Person(),position(""),salary(0.0){}
Employee::Employee(string a, string b, string c, string d, string e, double f):Person(a,b,c,d), position(e), salary(f){}
Employee::Employee(const Employee &e) : Person(e) {
	position = e.position;
	salary = e.salary;
}

void Employee::setPosition(string a) { position = a; }
void Employee::setSalary(double b) { salary = b; }

string Employee::getPosition() { return position; }
double Employee::getSalary() { return salary; }

void Employee::print() {
	
		cout << "Position:    " << getPosition()
		<< "\nSalary:      " << getSalary() << " $"<< endl;
}

Employee::~Employee(){}