#pragma once
#include"time.h"
using namespace std;
class personal
{
	string firstName;
	string lastName;
	string ID;
	string melliCode;
	time entryTime, exitTime;
public:
	void input();
	void show();
};
