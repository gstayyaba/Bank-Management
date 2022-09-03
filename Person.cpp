#include "stdafx.h"
#include "Person.h"
using namespace std;

Person::Person():name(""),address(""), cnic(""), contact("") {}
Person::Person(string a, string b, string c, string d):name(a),address(b),cnic(c), contact(d) {}

Person::Person(const Person&p) {
  name = p.name;
  contact = p.contact;
  address = p.address;
  cnic = p.cnic;
}

void Person::operator=(const Person &p) {
  name = p.name;
  contact = p.contact;
  address = p.address;
  cnic = p.cnic;
}

void Person::setName(string a) { name =a; }
void Person::setContact(string a) { contact=a; }
void Person::setAddress(string a) { address=a; }
void Person::setCnic(string a) { cnic=a; }

string Person::getName() { return name; }
string Person::getContact() { return contact; }
string Person::getAddress() { return address; }
string Person::getCnic() { return cnic; }

void Person::print() {
	cout << "Name:        " << getName()
		<< "\nAddress:     " << getAddress()
		<< "\nCNIC:        " << getCnic()
		<< "\nContact:     " << getContact() << endl;
}

Person::~Person() { /*cout << "Person Destructed" << endl;*/ }