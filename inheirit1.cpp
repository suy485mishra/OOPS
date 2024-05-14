// Example: define member function without argument within the class

#include <bits/stdc++.h>
using namespace std;

class Person {
    //privatr for person
	int id;
	string name;

public:
	void set_p()
	{
		cout << "Enter the Id:";
		cin >> id;
		cout << "Enter the Name:";
		cin >> name;
	}

	void display_p()
	{
		cout << endl <<"Id: "<< id << "\nName: " << name <<endl;
	}
};

class Student : private Person {
    //pvt for student
	string course;
	int fee;

public:
	void set_s()
	{
		set_p();
		cout << "Enter the Course Name:";
		cin >> course;
		cout << "Enter the Course Fee:";
		cin >> fee;
	}

	void display_s()
	{
		display_p();
		cout <<"Course: "<< course << "\nFee: " << fee << endl;
	}
};

int main()
{
	Student s;
	s.set_s();
	s.display_s();
	return 0;
}
