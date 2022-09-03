#include "stdafx.h"
#include "Branch.h"

Branch::Branch() :name("") {
	a1 = new Current[20];
	a2 = new Saving[20];
	e = new Employee[20];
}
Branch::Branch(string a) : name(a) {
	a1 = new Current[20];
	a2 = new Saving[20];
	e = new Employee[20];
}

void Branch::setName(string a) { name = a; } // set name of branch
string Branch::getName() { return name; }

void Branch::EmployeeMenu() {
	int x; int l;
	cout << "1. Add";
	cout << "\n2. Search";
	cout << "\n3.Delete\nEnter your choice: ";
	cin >> x;
	if (x == 1)
	{
		
		Employee e;
		cin >> e;
		AddEmployee(e);
		cout << "Employee added successfully\n";
	}
	else if (x == 2) {
		string a;
		cout << "Enter Name: "; cin.ignore(); getline(cin, a);
		searchEmployee(a);
	}
	else if (x == 3) {

		string a;
		cout << "Enter Name: "; cin.ignore(); getline(cin, a);
		deleteEmployee(a);
		cout << "Employee deleted successfully\n";
	}


}
void Branch::AccountMenu()
{
	int x;
	cout << "1. Add";
	cout << "\n2. Search";
	cout << "\n3. Delete";
	cout << "\n4. Modify\n Enter your choice:  ";
	cin >> x;
	if (x == 1)
	{
		cout << "Choose account type:\n";
		cout << "1. Current\n2. Saving\n";
		int input;
		cin >> input;
		Account a;
		cin >> a;
		addAccount(a, input);
		cout << "Account added successfully\n";
	}
	else if (x == 2) {
		cout << "Choose account type:\n";
		cout << "1. Current\n2. Saving\n";
		int input;
		cin >> input;
		searchAccount(input);
	}
	else if (x == 3) {
		cout << "Choose account type:\n";
		cout << "1. Current\n2. Saving\n";
		int input;
		cin >> input;
		deleteAccount(input);
	}
	else if (x == 4) {
		cout << "Choose account type:\n";
		cout << "1. Current\n2. Saving\n";
		int input;
		cin >> input;
		modifyAccount(input);
	}
		
}


void Branch::addAccount(Account a, int input)
{
	
	if (input == 1)
	{
		a1[i] = a;
		i++;
	}
	if (input == 2)
	{
		a2[j] = a;
		j++;
	}
}
void Branch::searchAccount(int input) {
	string a;
	cout << "Enter Name: "; cin.ignore(); getline(cin, a);
	if (input == 1) {
		for (int x = 0; x < i; x++)
		{
			if (a == a1[x].getName())
			{
				a1[x].print();
			}
		}
	}
	else if (input == 2) {
		for (int x = 0; x < j; x++)
		{
			if (a == a2[x].getName())
			{
				a2[x].print();
			}
			
		}
	}
}
void Branch::deleteAccount(int input) {
	string a;
	int o = 0;
	cout << "Enter Name: "; cin.ignore(); getline(cin, a);
	if (input == 1) {
		for (int x = 0; x < i; x++)
		{
			if (a == a1[x].getName())
			{
				a1[x] = a1[x + 1];
				i--;
			}
			else
				o = 1;
		}
		if (o == 1)
			cout << "not found";
	}
	else if (input == 2) {
		for (int x = 0; x < j; x++)
		{
			if (a == a2[x].getName())
			{
				a2[x] = a2[x + 1];
				j--;
			}
			if (o == 1)
				cout << "not found";
		}
	}
}
void Branch::modifyAccount(int input) {
	int p; int o = 0; int q = 0;
	string b; string a;
	cout << "1. Change Address"
		<< "\n2. Change Contact"
		<< "\n3. Deposit Amount"
		<< "\n4. Withdraw Amount\nEnter your choie: ";
	cin >> l;
	if (input == 1)
	{
		cout << "Enter Name: "; cin.ignore(); getline(cin, b);
		for (int x = 0; x < i; x++)
		{
			if (b == a1[x].getName())
			{
				if (l == 1) {
					cout << "Enter new address: ";
					cin.ignore(); getline(cin, a);
					a1[x].setAddress(a);
				}
				else if (l == 2) {
					cout << "Enter new contact: ";
					cin.ignore(); getline(cin, a);
					a1[x].setContact(a);
				}
				else if (l == 3) {
					cout << "Enter amount to deposit: ";
					cin >> p;
					a1[x].deposAmount(p);
				}

				else if (l == 4) {
					cout << "Enter amount to withdraw: ";
					cin >> p;
					a1[x].drawAmount(p);
				}
			}
		}
			
	}
	else if (input == 2)
	{
		for (int x = 0; x < i; x++)
		{
			cout << "Enter Name: "; cin.ignore(); getline(cin, b);
			if (b == a2[x].getName())
			{
				if (l == 2) {
					cout << "Enter new address: ";
					cin.ignore(); getline(cin, a);
					a2[x].setAddress(a);
				}
				else if (l == 2) {
					cout << "Enter new contact: ";
					cin.ignore(); getline(cin, a);
					a2[x].setContact(a);
				}
				else if (l == 3) {
					cout << "Enter amount to deposit: ";
					cin >> p;
					a2[x].deposAmount(p);
				}

				else if (l == 4) {
					cout << "Enter amount to withdraw: ";
					cin >> p;
					a2[x].drawAmount(p);
				}
			}
		}
	}
}

void Branch::AddEmployee(Employee e1) { 
	e[k] = e1;
	k++;
}
void Branch::searchEmployee(string a) {
	int l = 0;
	for (int x = 0; x < k; x++)
	{
		if (a == e[x].getName())
		{
			e[x].print();
		}
		else
			l = 1;
	}
	if (l == 1)
	{
		cout << "Not found.";
	}
}
void Branch::deleteEmployee(string a) {
	for (int x = 0; x < k; x++)
	{
		if (a == e[x].getName())
		{
			e[x] = e[x + 1];
		}
	}
	k--;
}

void Branch::displayMenu()
{
	int x;
	cout << "\n      " << getName() << endl << endl;
	cout << "1. Employee\n";
	cout << "2. Account\nEnter your choice: ";
	cin >> x;
	if (x == 1)
	{
		for (int i = 0; i < k; i++)
		{
			e[i].print();
			cout << endl;
		}
	}
	else if (x == 2)
	{
		int l;
		cout << "Account Type:\n"
			<< "1. current\n2. Saving\n";
		cin >> l;
		if (l == 1) {
			for (int x = 0; x < i; x++)
			{
				a1[x].print();
				cout << endl;
			}
		}
		else if (l == 2) {
			for (int x = 0; x < j; x++)
			{
				a2[x].print();
				cout << endl;
			}
		}
	}
}


Branch::~Branch() {
}