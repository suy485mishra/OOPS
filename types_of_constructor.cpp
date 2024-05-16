//DEFAULT

#include <bits/stdc++.h>
using namespace std;

class Employee {
  public:
    int age;
    // Default constructor not defined.
    // Compiler calls default constructor.
};

int main() {
  // Object e1 declared.
  Employee e1; 
  cout << e1.age;
  return 0;
}


#include <bits/stdc++.h>
using namespace std;

class Employee {
  public:
    int age;
  
    // Default constructor.
    Employee() {
      /* Data member is defined with the help of the 
      default constructor.*/
      age = 50;
    }
};

int main() {
  // Object of class Employee declared.
  Employee e1;
  // Prints value assigned by default constructor.
  cout << e1.age;
  return 0;
}


//PARAMETERISED
#include <iostream>

using namespace std;

class Employee {
  public:
    int age;
    // Parameterized constructor
    Employee(int x) { 
    /* Age assigned to value passed as an argument 
    while object declaration.*/
      age = x; 
    }
};

int main() {
  /* Object c1 declared with argument 40, which 
  gets assigned to age.*/
  Employee c1(40); 
  Employee c2(30);
  Employee c3(50);
  cout << c1.age << "\n";
  cout << c2.age << "\n";
  cout << c3.age << "\n";
  return 0;
}


//COPY
//A copy constructor comes into the picture whenever there is a need for an 
// object with the same values for data members as an already existing object
#include<iostream>
using namespace std;

class Employee {
  private:
    // Data members
    int salary, experience; 

  public:
    // Parameterized constructor
    Employee(int x1, int y1) { 
      salary = x1;
      experience = y1;
    }

    // Copy constructor
    Employee(const Employee &new_employee) {
      salary = new_employee.salary;
      experience = new_employee.experience;
    }

    void display() {
      cout << "Salary: " << salary << endl;
      cout << "Years of experience: " << experience << endl;
    }
};

// main function 
int main() {
  // Parameterized constructor
  Employee employee1(34000, 2); 
  // Copy constructor
  Employee employee2 = employee1; 
  cout << "Employee1 using parameterized constructor : \n";
  employee1.display();
  cout << "Employee2 using copy constructor : \n";
  employee2.display();
  return 0;
}



//DYNAMIC
#include <iostream>
using namespace std;

class Employee {
  int* due_projects;

  public:
    // Default constructor.
    Employee() {
    // Allocating memory at run time.
      due_projects = new int;
      *due_projects = 0;
    }

    // Parameterized constructor.
    Employee(int x) {
      due_projects = new int;
      *due_projects = x;
    }
    
    void display() {
      cout << *due_projects << endl;
    }
};

// Main function 
int main() {
  // Default constructor would be called.
  Employee employee1 = Employee();
  cout << "Due projects for employee1:\n";
  employee1.display();

  // Parameterized constructor would be called.
  Employee employee2 = Employee(10);
  cout << "Due projects for employee2:\n";
  employee2.display();
  return 0;
}
