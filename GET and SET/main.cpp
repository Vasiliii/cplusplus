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

int main()
{
	Point a;
	a.SetX(5);
	a.SetY(11);
	a.Print();
	
}