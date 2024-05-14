// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
		cout << "This is a 4 wheeler Vehicle\n";
	}
};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
   public: Car() {cout << "This is aCar";}
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Car obj;
	return 0;
}

//here-->first of all class vehicle will get executed, then fourwheeler and at last Car