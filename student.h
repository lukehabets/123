// CLASS PROVIDED:  Person (an ADT for a person)
//
// CONSTRUCTOR for the Person class:
//	Person()
//		Description: Constructor will initialize Person objects
//		Precondition: none
//		Postcondition: The person has been set to ""MISSING FIRST NAME", "MISSING LAST NAME", "MISSING ADDRESS"
//
// MODIFICATION MEMBER FUNCTIONS for the Person class
//	void setLastName(const string&)
//		Description: set the last name of the person
//		Precondition: name must be 1-15 char and have no spaces
//		Postcondition: last name of the person has been set to name
//
//	void setFirstName(const string&)
//		Description: set the first name of the person
//		Precondition: input must be 1-15 char and have no spaces
//		Postcondition: first name of the person has been set to input
//
//	void setAddress(const string&)
//		Description: set the address of the person
//		Precondition: input must be between 1-15 char
//		Postcondition: address of the person has been set to input
//
// CONSTANT MEMBER FUNCTIONS for the Person class
//	string getAddress(void) const
//		Description: obtain the address of the person
//		Preconditions: none
//		Postconditions: address of the person is returned
//
//	string getFirstName(void) const
//		Description: obtain the first name of the person
//		Preconditions: none
//		Postconditions: first name of the person is returned
//
//	string getLastName(void) const
//		Description: obtain the last name of the person
//		Preconditions: none
//		Postconditions: last name of the person is returned
//
//	void display(void) const;
//		Description: Displays the person's information
//		Preconditions: none
//		Postconditions: the information of the person is displayed on the screen


// CLASS PROVIDED:  Student (an ADT for a student)
//
// CONSTRUCTOR for the Student class:
//
// MODIFICATION MEMBER Functions for the Student class
//
// CONSTANT MEMBER FUNCTIONS for the Student class

#include <string.h>
#include <iostream>

using namespace std;

class Person 
{
	
	public:
		Person();
		void setLastName(const string&);
		void setFirstName(const string&);
		void setAddress(const string&);
		
		string getAddress(void) const;
		string getFirstName(void) const;
		string getLastName(void) const;
		void display(void) const;
		
	private:
		string lastName;
		string firstName;
		string address;
};

class Student:public Person
{
	public:
		Student();
		void setId(const int);
		void setGpa(const int, const int);
		void setCredits(const int);
		void setQuality(const int);
		
		int getID(void) const;
		int getGpa(void) const;
		int getCredits(void) const;
		int getQuality(void) const;
		void display(void) const;
	
	private:
		int id;
		int gpa;
		int creditsComp;
		int qualityPoints;
};

