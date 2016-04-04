// 6-static(data member,member function).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class test
{
	int x;
	float y;
	static int z;
public:
	static void setZ();
	static int getZ();
};
void test::setZ()
{
	z = 10;
}
int test::getZ()
{
	return z;
}
int test::z;
int main()
{
	//test ob1,ob2;
	test::setZ();
	cout <<test::getZ();
	cin.get();
    return 0;
}

