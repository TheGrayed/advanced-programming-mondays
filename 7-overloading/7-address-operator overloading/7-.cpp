// 7-.cpp : Defines the entry point for the console application.
//point be object,point be object's data member,point be class's member

#include "stdafx.h"
#include<iostream>
using namespace std;
class test
{
	int x,y;
public:
	void input();
	void show();
	test operator+(test);
};
test test::operator+(test a)
{
	test temp;
	temp.x = this->x + a.x;
	temp.y = this->y + a.y;
	return temp;
}
void test::input()
{
	cout << "Enter x : ";
	cin >> this->x;
	cout << "Enter y : ";
	cin >> this->y;
}
void test::show()
{
	cout << endl << "x = " << x << "\ty = " << y;
}
int main()
{
	test ob1,ob2,ob3;
	ob1.input();
	ob2.input();
	ob3 = ob1 + ob2;
	ob3.show();
	ob1 + ob2; //operator overloading
	//p->input();
	//p->show();
	//cin >> *p;
	//cout << "ob1.z = " << ob1.z<<"\tob2.z = "<<ob2.z;
	cin.get();
	cin.get();
    return 0;
}
//f'address=1th instructrure=address without arg
//all f-static(bedune object call mishe)=this
//operator1=>overload nemikhad=>& =
//operator2=>haghe overload nadarin=>?  sizeof :: . .* ->*
//operator3=>hatman overload she=>baghie
//operatore new va delete bara ba'de eid !!!!!












































