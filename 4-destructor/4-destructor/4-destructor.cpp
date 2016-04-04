// 4-destructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class test
{
	friend test f1(test, test);
	int x, y;
public:
	test();
	~test();
};
test::test()
{
	x = 10;
	y = 20;
	cout << "\nconstructor\n";
}
test::~test()
{
	cout << "\ndestructor\n";
}
test f1(test,test);
int main()
{
	test t1,t2;
	t2=f1(t1,t2);
	cin.get();
    return 0;
}
test f1(test a,test b)
{
	test c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}






