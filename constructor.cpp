//default
// Example 
// #include<iostream>
// using namespace std;
// class student
// {
// 	int rno;
// 	char name[50];
// 	double fee;
// 	public:
// 	student()					 // Explicit Default constructor
// 	{
// 		cout<<"Enter the RollNo:";
// 		cin>>rno;
// 		cout<<"Enter the Name:";
// 		cin>>name;
// 		cout<<"Enter the Fee:"; 
// 		cin>>fee;
// 	} 
	
// 	void display()
// 	{
// 		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
// 	}
// };

// int main()
// {
// 	student s;
// 	s.display();
// 	return 0;
// }
// CPP program to demonstrate Default constructors
#include <iostream>
using namespace std;

class Base {
public:
	// compiler "declares" constructor
};

class A {
public:
	// User defined constructor
	A() { cout << "A Constructor" << endl; }

	// uninitialized
	int size;
};

class B : public A {
	// compiler defines default constructor of B, and
	// inserts stub to call A constructor

	// compiler won't initialize any data of A
};

class C : public A {
public:
	C()
	{
		// User defined default constructor of C
		// Compiler inserts stub to call A's constructor
		cout << "C Constructor" << endl;

		// compiler won't initialize any data of A
	}
};

class D {
public:
	D()
	{
		// User defined default constructor of D
		// a - constructor to be called, compiler inserts
		// stub to call A constructor
		cout << "D Constructor" << endl;

		// compiler won't initialize any data of 'a'
	}

private:
	A a;
};

// Driver Code
int main()
{
	Base base;

	B b;
	C c;
	D d;

	return 0;
}
