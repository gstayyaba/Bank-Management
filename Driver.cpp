// Final Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Account.h"
#include "Employee.h"
#include "Current.h"
#include "Saving.h"
#include "Bank.h"
#include <array>
#include <iostream>
using namespace std;

int main()
{
	Account a1("1", "Tayyaba Shoukat", "293 L, Wapda Town Phase II, Lahore", "35202-1520488-2", "+923044227469", 2500);
	Account a2("2", "Farhan Shoukat", "192 Airline Housing Society, Lahore", "35202-5565667-5", "+923084569845", 2000);
	Account a3("3", "Mahmood Salah-u-din", "102 Iqbal Avenue Phase II, Lahore", "35202-3467489-7", "+923084569845", 1000);

	Account a4("1", "Armeen Mazhar", "293 PIA Housing Society, Lahore", "35202-7345783-2", "+92304348734", 6700);
	Account a5("2", "Saima Iqbal", "192 Airline Housing Society, Lahore", "35202-5565667-5", "+923084569845", 2000);
	Account a6("3", "Abdullah tehseen", "212 Iqbal Avenue Phase II, Lahore", "35202-3634657-7", "+923083487347", 2500);

	Account a7("1", "Shabana Perveen", "220 D, Phase VIII Ex-park view, DHA lahore", "35202-3567589-4", "+933008198787", 4000);
	Account a8("2", "Afia Mansoor", "210 B, Phase VI, DHA Lahore", "35202-3567589-4", "+933008198787", 2000);
	Account a9("3", "Maryam Mansoor", "115 C, Paragon City Lahore", "35202-3483902-4", "+933089384939", 5000);

	Account a10("1", "Maryam mansoor", "115 C, Paragon City Lahore", "35202-3483902-4", "+933089384939", 5000);
	Account a11("2", "Areeba Mahmood", "116 A, Phase VI, DHA Lahoree", "35202-6434833-4", "+923057667678", 3000);
	Account a12("3", "Zubia Mansoor", "492 h, Phase VIII Ex-park view, DHA lahore", "35202-3483902-4", "+933089384939", 5000);

	Employee e1("Aleena Ikram", "291 H, Wapda Town Phase II, Lahore", "35202-5565757-5", "+9234783578545", "Manager", 500);
	Employee e2("Ayesha Saeed", "71 A Iqbal Evenue Phase I, Lahore", "35202-6755777-4", "+9230565765789", "Accountant", 100);
	Employee e3("Amina Mahmood", "219 D, PIA Housing Society Lahore", "35202-5656937-4", "+923056203789", "Accountant", 100);

	Employee e4("Haris Salah-u-Din", "219 D, Phase VI, DHA lahore", "35202-4653653-4", "+923037768788", "Manager", 600);
	Employee e5("Amna Arif", "92 A Paragon City, Lahore", "35202-6436463-4", "+923034734778", "Accountant", 200);
	Employee e6("Aleena Shahzad", "256 C Phase VIII, DHA lahore", "35202-1829398-4", "+923074837478", "Accountant", 200);

	Branch b1("PIA Road Branch");
	Branch b2("DHA Phase VII Branch");
	// current account adding
	b1.addAccount(a1, 1);
	b1.addAccount(a2, 1);
	b1.addAccount(a3, 1);
	// saving account
	b1.addAccount(a4, 2);
	b1.addAccount(a5, 2);
	b1.addAccount(a6, 2);
	// employee adding
	b1.AddEmployee(e1);
	b1.AddEmployee(e2);
	b1.AddEmployee(e3);
	// Cuurent account adding
	b2.addAccount(a7, 1);
	b2.addAccount(a8, 1);
	b2.addAccount(a9, 1);
	// Saving Account adding
	b2.addAccount(a10, 2);
	b2.addAccount(a11, 2);
	b2.addAccount(a12, 2);
	// Employee adding
	b2.AddEmployee(e4);
	b2.AddEmployee(e5);
	b2.AddEmployee(e6);
	Bank b("Bank Al Habib");
	b.setBranch(b1);
	b.setBranch(b2);

	while (true)
	{
		cout << "                   Welcome to " << b.getName() << endl;
		b.Menu();
		system("pause");
		system("cls");
	}
	
    return 0;
}

