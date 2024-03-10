#include <bits/stdc++.h>
// #include "ref.cpp"
using namespace std;

class Hero
{
    // int a;
private:
    char lvl = 'A';

public:
    int h = 4;
    char getlvl()
    {
        return lvl;
    }
    Hero()
    {
        cout << "inside constructor"
             << "\n";
    }
    /*If you do not explicitly provide
     any constructor in your class, 
     the compiler generates a default 
     constructor for you. However, once
      you define any constructor 
      (including a non-default 
      constructor), the compiler will not
       automatically generate a default 
       constructor.*/
    
    //SELF MADE COPY CONSTRUCTOR
    Hero(Hero& temp){
        cout<<"self made apun kya"<<"\n";
        this->h=temp.h;
        this->lvl=temp.lvl;
    }
    void setlvl(char c)
    {
        lvl = c;
    }
    void print()
    {
        cout << "h: " << this->h << "\n";
        cout << "lvl: " << this->lvl << "\n";
    }
    // para cons
    Hero(int h, char lvl)
    {
        this->lvl = lvl;
        this->h = h;
    }
};
int main()
{
    // oops?

    // object--property,behaviour--instance of class

    // benefit of oop

    // class--->user defined datatype(custom)

    // hero h1;//figure, object creation

    // cout << sizeof(h1) << "\n";

    // size of class,empty class size=1

    // class can be kep in different file too

    // accessing inside class
    //  hero suy;
    //  cout<<suy.h<<"\n";

    // cout<<suy.lvl<<"\n";

    // access modifiers-->public,private,protected

    // public: class k bahar aur andar dono
    // private:only inside class

    // getter setter-->we can access private info too
    //   cout<<h1.getlvl()<<"\n";
    //   h1.setlvl('b');
    //   cout<<h1.getlvl()<<"\n";

    // pdding & greeding alignment -->sizeof ki anatomy

    // static memory alloocation
    Hero h1;
    //  cout<<h1.h<<"\n";
    //  cout<<h1.getlvl()<<"\n";
    // dynamic-->address of heap memory where actual obj is stored in p. *p represents actual object. only p represents pointer to it
    //  Hero *p=new Hero;
    //  cout<<(*p).h<<"\n";
    //  cout<<(*p).getlvl()<<"\n";
    // Alternatively
    // cout<<p->h<<"\n";

    // default contructor
    Hero k;
    Hero *p = new Hero;
    // Alternatively
    Hero *p1 = new Hero();

    // parametrised constuctor
    // this keyword

    // copy constructor
    Hero s(9, 'c');
    s.print();
    Hero y(s);
    y.print();


    //shallow & deep copy
    

    return 0;
}
