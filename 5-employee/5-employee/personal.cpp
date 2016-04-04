#include"stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
#include "time.h"
#include"personal.h"
using namespace std;
void personal::input()
{
	cout << "Enter first name : ";
	getline(cin,firstName);
	cout << "Enter last name : ";
	getline(cin, lastName);
	cout << "Enter ID: ";
	getline(cin, ID);
	cout << "Enter melli code : ";
	getline(cin, melliCode);
	cout << "This is entry time : \n";
	entryTime.input();
	cout << "This is exit time : \n";
	exitTime.input();
	cin.ignore();
}
void personal::show()
{
	cout <<setw(10)<<firstName << lastName << ID << melliCode;
}

