#include <iostream>
#include<cstdio>
#include <time.h>
using namespace std;
// lottery machine
class Lottery_Machine{
public:

    int lottery_number;
    void get_lottery(){
// get a random number between 0 to 99
        srand(time(0));
        lottery_number=rand()%100;
        cout << "Lottery_number is: " << lottery_number;
    }    
};

class User{
private:    

    string user_name;
    int user_id;
public:
    User(string name,int id){
        user_name=name;
        user_id=id;
    }

    void call_lottery(Lottery_Machine lottery){
        cout << "User name : " << user_name<<endl;
        cout << "User id: "<< user_id<<endl;
        lottery.get_lottery();
    }
};
int main() {

    User Bob("bob",21);

    Lottery_Machine lottery;
    
// The user pressing the button in 
// lottery machine to get lottery
    Bob.call_lottery(lottery);

    return 0;
}
