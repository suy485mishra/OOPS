// super keyword in java example 

1)) // with variable
// Base class vehicle 
class Vehicle { 
	int maxSpeed = 120; 
} 

// sub class Car extending vehicle 
class Car extends Vehicle { 
	int maxSpeed = 180; 

	void display() 
	{ 
		// print maxSpeed of base class (vehicle) 
		System.out.println("Maximum Speed: "
						+ super.maxSpeed); 
	} 
} 

// Driver Program 
class Test { 
	public static void main(String[] args) 
	{ 
		Car small = new Car(); 
		small.display(); //120 OUTPUT
	} 
}

2)) with methods

// super keyword in java example 

// superclass Person 
class Person { 
	void message() 
	{ 
		System.out.println("This is person class\n"); 
	} 
} 
// Subclass Student 
class Student extends Person { 
	void message() 
	{ 
		System.out.println("This is student class"); 
	} 
	// Note that display() is 
	// only in Student class 
	void display() 
	{ 
		// will invoke or call current 
		// class message() method 
		message(); 

		// will invoke or call parent 
		// class message() method 
		super.message(); 
	} 
} 
// Driver Program 
class Test { 
	public static void main(String args[]) 
	{ 
		Student s = new Student(); 

		// calling display() of Student 
		s.display();  //THIS IS A STUDENT CLASS \n THIS IS A PARENT CLASS

	} 
}

3)) Use of super with constructors
class ParentClass { 
	public boolean isTrue() { return true; } 
} 

class ChildClass extends ParentClass { 
	public boolean isTrue() 
	{ 
		// calls parent implementation of isTrue() 
		boolean parentResult = super.isTrue(); 
		// negates the parent result 
		return !parentResult; 
	} 
} 

public class Main { 
	public static void main(String[] args) 
	{ 
		ChildClass child = new ChildClass(); 
		// calls child implementation 
		// of isTrue() 
		boolean result = child.isTrue(); 

		// prints "false" 
		System.out.println(result); 
	} 
}
