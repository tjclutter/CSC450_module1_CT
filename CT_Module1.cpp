//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName;
	string lastName;
	string streetAdress;
	string city;
	string zipCode;

	cout << "Enter first name: ";
	cin >> firstName;
	cout << endl;
	cout << "Enter last name: ";
	cin >> lastName;
	cout << endl;
	cout << "Enter street address: ";
	cin.ignore();
	getline(cin, streetAdress);
	cout << endl;

	cout << "Enter City: ";
	getline(cin, city);
	cout << endl;
	cout << "Enter zip code: ";
	cin >> zipCode;
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Home address: " << streetAdress << " " << city << " " << zipCode;
	return 0;
}
