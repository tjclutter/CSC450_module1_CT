//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//include statements
#include <iostream>
#include <string>
//standard namespace declaration
using namespace std;

//main function
int main() {
	//variable declarations
	string firstName;
	string lastName;
	string streetAdress;
	string city;
	string zipCode;

	// prompt user for first name and store in variable
	cout << "Enter first name: ";
	cin >> firstName;
	cout << endl;
	// prompt user for last name and store in variable
	cout << "Enter last name: ";
	cin >> lastName;
	cout << endl;
	// prompt user for street address and store in variable
	cout << "Enter street address: ";
	cin.ignore();
	getline(cin, streetAdress);
	cout << endl;
	// prompt user for city and store in variable
	cout << "Enter City: ";
	getline(cin, city);
	cout << endl;
	//prompt user for zip code and store invariable
	cout << "Enter zip code: ";
	cin >> zipCode;
	//output to user full name and home address
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Home address: " << streetAdress << " " << city << " " << zipCode;
	//main function return statement
	return 0;
}
