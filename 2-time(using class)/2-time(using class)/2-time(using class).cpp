// 2-time(using class).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class time
{
	unsigned h, m, s;
public:
	void input(void);
	void printMilitary();
	void printAmPm();
};
void time::input()
{
	do
	{
		cout << "Enter hour : ";
		cin >> h;
		if (h < 24) break;
		cout << "ERROR"<<endl;
	} while (1);  //=!0 mishe true
	do
	{
		cout << "Enter minute : ";
		cin >> m;
		if (m < 60) break;
		cout << "ERROR" << endl;
	} while (1);  //=!0 mishe true
	do
	{
		cout << "Enter second : ";
		cin >> s;
		if (s < 60) break;
		cout << "ERROR" << endl;
	} while (1);  //=!0 mishe true
}
void time::printMilitary()
{
	cout << "military format for your time is : " << h << ':' << m << ':' << s<<endl;

}
void time::printAmPm()
{
	cout << "A.M P.M format for your time is : " << h%12 << ':' << m << ':' << s;
	if (h > 12)
		cout <<"A.m";
	else
	    cout << "P.m";
}
int main()
{
	time t;
	t.input();
	t.printMilitary();
	t.printAmPm();
	cin.get();
	cin.get();
    return 0;
}

//������ �? ���?�?� �� ��� ��ǘ�� 15 � ���?�? ��ǘ�� 20 � ����� ������?? ��ǘ�� 9 � ���?� ������ �� ��?��� ��� � Ӂ� �� ?� ���� ����� �ǁ ���