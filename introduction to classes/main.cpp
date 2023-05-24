//introduction to class

#include <iostream>
#include <string>

/*
* what is a class?
* what is a class object?
*/

using namespace std;

class Human 
{
public:

	int age;
	double weight;
	string name;

	void print() //function "print" is a member of class (or method) Human
	{
		cout << "Name: " << name << "\nage: " << age << "\nweight: " << weight << endl;
	}

};

int main()
{
	Human firstHuman; // firstHuman is an object of the Human class

	firstHuman.age = 30;
	firstHuman.name = "Ignatov Ignat Ignatovich ";
	firstHuman.weight = 89.3;

	firstHuman.print();//call member of class Human for object firstHuman 

	cout << "_____________________________________________" << endl;

	Human secondHuman; // secondHuman is an object of the Human class

	secondHuman.age = 20;
	secondHuman.name = "Doshikova Doshik Doshikovna";
	secondHuman.weight = 60;

	secondHuman.print(); //call member of class Human for object secondHuman

	return 0;
}