//ObjPtr-Defining and using a pointer to an object
#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;

class Student
{
public:
	int semesterHours;
	double gpa;
	double addCourse(int hours, double grade)
		{
			//calculate the average grade taking into account the time of different courses
			double weightedGPA;
			weightedGPA = semesterHours * gpa;
			//add new course
			semesterHours += hours;
			weightedGPA += grade * hours;
			gpa = weightedGPA / semesterHours;

			return gpa;
		}
};

int main()
{
	//create object of Student
	Student s;
	s.gpa = 3.0;

	//create pointer to object of Student
	Student* pS;

	//assigning a reference to our object to a pointe
	pS = &s;
	cout << "s.gpa = " << s.gpa << endl;
	cout << "pS->gpa = " << pS->gpa << endl;

	cout << "\n============================\n" << endl;

	//We refer to the gpa member of the object pointed to by pS
	pS->gpa = 3.5;
	cout << "s.gpa = " << s.gpa << endl;
	cout << "pS->gpa = " << pS->gpa << endl;

	//Waiting, allowing you to see the result of the program.
	cout << "Press enter for continue.." << endl;
	cin.ignore(10, '\n');
	cin.get();

	return 0;
}