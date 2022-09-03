#ifndef Person_h
#define Person_h


#include <iostream>
#include <string>
using namespace std;

class Person {
  protected:
    string name;
    string contact;
    string address;
    string cnic;
  public:
    Person();
    Person(string, string, string , string);
    Person(const Person&);

    void operator=(const Person&);
    void setName(string);
    void setContact(string);
    void setAddress(string);
    void setCnic(string a);

    string getName();
    string getContact();
    string getAddress();
    string getCnic();

	void print();
	~Person();
};

#endif
