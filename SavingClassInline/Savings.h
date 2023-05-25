//Saving - definition of a class with the ability to make deposit

class Saving
{
public:
	unsigned int accountNumber;
	double balance;
	//Declare and define member functions
	double deposit(double amount)
	{
		balance += amount;
		return balance;
	}
};

