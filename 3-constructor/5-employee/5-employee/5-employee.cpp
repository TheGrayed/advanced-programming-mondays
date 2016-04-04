// 5-employee.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include"personal.h"
#include <string>
#include "time.h"
#define SIZE 2
using namespace std;
int main()
{
	personal p[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t\t\t***** personal " << i + 1 << " *****\n";
		p[i].input();
	}
	cout << "\nfirst name"<<"\tlast name";
	cout << "\n----------"<<"\t---------";
	for (int i = 0; i < SIZE; i++)
	{
		p[i].show();
	}
	cin.get();
	return 0;
}