// C++ program to demonstrate
// Encapsulation
#include <iostream>
using namespace std;

class Encapsulation
{
private:
    // Data hidden from outside world
    int x;

public:
    // Function to set value of
    // variable x
    void set(int a) { x = a; }

    // Function to return value of
    // variable x
    int get() { return x; }
};

// Driver code
int main()
{
    Encapsulation obj;
    obj.set(5);
    cout << obj.get();
    return 0;
}

// Explanation: In the above program, the variable x is made private.
//  This variable can be accessed and manipulated only using the functions get() and set()
//  which are present inside the class. Thus we can say that here, 
// the variable x and the functions get() and set() are bound together which is nothing but encapsulation.