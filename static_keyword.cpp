#include <bits/stdc++.h>
using namespace std;
class Base {
   public : static int val;
   static int func(int a) {
      cout << "\nStatic member function called";
      cout << "\nThe value of a : " << a;
   }
};
int Base::val=28;
int main() {
   Base b;
   Base::func(8);
   cout << "\nThe static variable value : " << b.val;
   return 0;
}