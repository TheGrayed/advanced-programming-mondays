// project 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	unsigned int h, m, s;
	do
	{
		cout << "please enter the hour(0-23) : ";
		cin >> h;
		if (h < 24) break;
		cout << "ERROR" << endl;
	} while (true);
	do
	{
		cout << "please enter the minute(0-59) : ";
		cin >>m;
		if (m < 60) break;
		cout << "ERROR" << endl;
	} while (true);
	do
	{
		cout << "please enter the second(0-59) : ";
		cin >> s;
		if (s < 60) break;
		cout << "ERROR" << endl;
	} while (true);
	cout << "your time in military format is : " << h << " : " << m << " : " << s << endl;
	cout << "your time in A.M /P.M format is : " << h%12 << " : " << m << " : " << s ;
	if (h < 12)
		cout << " A.M";
	else
		cout << " P.M";
	cin.get();
	cin.get();
    return 0;
}






