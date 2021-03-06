
//拷贝构造函数
//Date3.h文件：定义Date类，其中定义了拷贝函数
#include<iostream>
#include<windows.h>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &date);//拷贝构造函数的申明
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();
};
Date::Date(int y, int m, int d)//构造函数
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}
Date::Date(const Date &date)//拷贝构造函数的定义
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Construct called.\n";
}
int Date::GetDay()
{
	return day;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetYear()
{
	return year;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
