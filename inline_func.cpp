#include <iostream>
using namespace std;

inline int max_num(int x, int y) {
  return (x > y)? x : y;
}

// Main function for the program
int main() {
   cout << "Greater of ( 40, 50 ) is: " << max_num(40,50) << endl;
   cout << "Greater of ( 90, 50 ) is: " << max_num(90,50) << endl;
   cout << "Greater of ( -5, 34 ) is: " << max_num(-5,34) << endl;
   return 0;
}