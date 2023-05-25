//SavingCassInline - calling a member function declared and defined in the Saving class
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
#include "Savings.h"

int main()
{
	Saving s;
	s.accountNumber = 1234;
	s.balance = 0.0;

	//adding some coins to the account
	cout << "We put 10 coins into the account\nYour account number is\t" << s.accountNumber << endl;
	s.deposit(10);
	cout << "\nBalance:\t" << s.balance << endl;

	//waiting allowing the user to see the 
	//result of the program
	cout << "Press enter for continue..." << endl;
	cin.ignore(10, '\n');
	//cin.get();

	return 0;
}