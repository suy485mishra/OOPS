#include <bits/stdc++.h>
using namespace std;

class sample
{
public:
    explicit sample(int x)
    {
        cout << "value: " << x;
    }
};
int main()
{
    sample obj=3.14;

}
//obj=3.14 works if explicit not used,but after explicit is gives error