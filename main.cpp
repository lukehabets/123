#include <iostream>
#include <string.h>
#include <fstream>
#include "student.h"

using namespace std;

int main() {
	
	//BEGIN FILE TEST
	string temp;
	
	Student std;
	
	ifstream input("input.txt");
	
	getline(input,temp);
	std.setFirstName(temp);
	
	getline(input,temp);
	std.setLastName(temp);
	
	getline(input,temp);
	std.setAddress(temp);
	
	getline(input,temp);
	
	std.display();
	
	std.setQuality(100);
	std.setCredits(20);
	std.setGpa(std.getQuality(),std.getCredits());
	
	
	
	cout<<"\n\n\n"<<std.getGpa();
	
	//END FILE TEST
	
	return 0;
}
