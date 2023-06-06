#include <iostream>

using namespace std;

class Point 
{
private:
	int x, y;
public:
	int GetY()
	{
		return y;
	}

	void SetY(int valX)
	{
		y = valX;
	}

	int GetX()
	{
		return x;
	}

	void SetX(int valX)
	{
		x = valX;
	}

	void Print()
	{
		cout << "X = " << x << "\nY = " << y << endl;
	}
};

class CoffeeGrinder
{
private:
	bool VoltageCheck(int U)
	{
		int maxU = 240, minU = 210;
		if (U >= maxU && U <= minU)
		{
			return false;
		}
		if (U < maxU && U > minU)
		{
			cout << "Sacces star" << endl;
			return true;
		}


	}

public:
	void Statr(int U)
	{
		if (VoltageCheck(U) == true) 
		{
			cout << "Vjuhhhh" << endl;
		}
		else
		{
			cout << "Error start" << endl;
			cout << "Sorry" << endl;
		}
	}
};

int main()
{
	int U;
	cout << "Specify the mains voltage: ";
	cin >> U;
	CoffeeGrinder a;
	a.Statr(U);

}