// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// base class
class Fare {
public:
	Fare() { cout << "Fare of Vehicle\n"; }
};

// first sub class
class Car : public Vehicle {
    public:
	Car() { cout << "Car: Vehicle\n"; }
};

// second sub class
class Bus : public Vehicle, public Fare {
    public:
	Bus() { cout << "Bus: Vehicle\n"; }
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Bus obj2;
    Car obj1;
	return 0;
}
