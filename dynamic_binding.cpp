// C++ Program to Demonstrate the Concept of Dynamic binding
// with the help of virtual function
#include <iostream>
using namespace std;

class GFG {
public:
	// function that call print

	void call_Function() { print(); }

	// the display function
	virtual void print()
	{
		cout << "Printing the Base class Content" << endl;
	}
};

// GFG2 inherited publicly
class GFG2 : public GFG {
public:
	void print() // GFG2's display
	{
		cout << "Printing the Derived class Content"
			<< endl;
	}
};
int main()
{
	GFG geeksforgeeks; // Creating GFG's object
	geeksforgeeks.call_Function(); // Calling call_Function
	GFG2 geeksforgeeks2; // calling GFG2
	geeksforgeeks2.call_Function();//this function is overridden in derived class
	return 0;
}
