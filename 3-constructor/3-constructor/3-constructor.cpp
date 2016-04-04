// 3-constructor.cpp : Defines the entry point for the console application.
//default constructor

#include "stdafx.h"
#include<iostream>
using namespace std;
class time
{
	unsigned h, m, s;
public:
	void show(void);
	time(unsigned=0,unsigned=0,unsigned=0);
};
void time::show()
{
	cout << endl << h << " : " << m << " : " << s << endl;
}
time::time(unsigned a,unsigned b,unsigned c)
{
	h = a;
	m = b;
	s = c;
	cout << "\nconstructor \n";
}
int main()
{
	time t1(1,3,11),t2(2,4),t3(2),t4;
	t1.show();
	t2.show();
	t3.show();
	t4.show();
	cin.get();
    return 0;
}

