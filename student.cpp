#include "student.h"
#include <iostream>
#include <string.h>

Person::Person()
{
	firstName = "MISSING FIRST NAME";
	lastName = "MISSING LAST NAME";
	address = "MISSING ADDRESS";
}
void Person::setFirstName(const string& temp)
{
	if(temp != "")
	{
		firstName = temp;
	}
}
void Person::setLastName(const string& temp)
{
	if(temp != "")
	{
		lastName = temp;
	}
}
void Person::setAddress(const string& temp)
{
	if(temp!= "")
	{
		address = temp;
	}
}
string Person::getFirstName(void) const
{
	return firstName;
}
string Person::getLastName(void ) const
{
	return lastName;
}
string Person::getAddress(void) const
{
	return address;
}
void Person::display(void) const
{
	cout<<"\nFirst name: "<<firstName;
	cout<<"\nLast name: "<<lastName;
	cout<<"\nAddress: "<<address;
}
Student::Student()
{
	id = 0;
	gpa = 0;
	creditsComp = 0;
	qualityPoints = 0;
}
void Student::setId(const int temp)
{
	id = temp;
}
void Student::setGpa(const int quality, const int credits) 
{
	gpa = quality/credits;
}
void Student::setCredits(const int temp)
{
	creditsComp = temp;
}
void Student::setQuality(const int temp)
{
	qualityPoints = temp;
}
int Student::getID(void) const
{
	return id;
}
int Student::getQuality(void) const
{
	return qualityPoints;
}
int Student::getCredits(void) const
{
	return creditsComp;
}
int Student::getGpa(void) const
{
	return gpa;
}
void Student::display(void) const
{
	Person::display();
	cout<<"\nStudent ID #: "<<id;
	cout<<"\nGPA: "<<gpa;
	cout<<"\nCredits completed: "<<creditsComp;
	cout<<"\nQuality points: "<<qualityPoints;
}
