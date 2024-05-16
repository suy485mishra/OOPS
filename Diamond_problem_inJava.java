// Java Program to demonstrate 
// Diamond Problem 
import java.io.*; 

// Parent Class1 
class Parent1 { 
	void fun() { System.out.println("Parent1"); } 
} 

// Parent Class2 
class Parent2 { 
	void fun() { System.out.println("Parent2"); } 
} 

// Inherting the Properties from 
// Both the classes 
class test extends Parent1, Parent2 { 
	// main function 
	public static void main(String[] args) 
	{ 
		test t = new test(); 
		t.fun(); 
	} 
}

//SOLUTION TO DIAMOND PROBLEM--->

// Java Programs to illustrate 
// use of Interface to solve 
// Diamond Problem 
import java.io.*; 

// Interfaces Declared 
interface Parent1 { 
	void fun(); 
} 

// Interfaces Declared 
interface Parent2 { 
	void fun(); 
} 

// Inheritance using Interfaces 
class test implements Parent1, Parent2 { 
	public void fun() 
	{ 
		System.out.println("fun function"); 
	} 
} 

// Driver Class 
class test1 { 
	// main function 
	public static void main(String[] args) 
	{ 
		test t = new test(); 
		t.fun(); 
	} 
}
