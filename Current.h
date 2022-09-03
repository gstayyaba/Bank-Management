#ifndef Current_h
#define Current_h

#include "Account.h"

class Current :public Account
{
public:
	Current();
	Current(string, string, string, string, string, double);
	
	void print();
	~Current();

};
#endif
