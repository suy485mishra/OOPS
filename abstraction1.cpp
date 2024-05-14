// C++ Program to Demonstrate the
// working of Abstraction
#include <iostream>
using namespace std;

class implementAbstraction {
private:
	int a, b;

public:
	// method to set values of
	// private members
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	implementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}
// You can see in the above program we are not allowed to access the variables a and b directly,
//  however, one can call the 
// function set() to set the values in a and b and the function display() to display the values of a and b. 