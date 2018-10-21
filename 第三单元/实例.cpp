#include"实例.h"
#include<stdlib.h>
student::student()
{
	name = NULL;
	age = 0;
}
student::student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//避免浅拷贝
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}
student::student(const student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;

}
student::~student()
{
	if (name)
		delete[]name;
}
char *student::Getname()
{
	return name;
}
char *student::GetID()
{
	return ID;
}
int student::GetAge()
{
	return age;
}
char *student::GetNumber()
{
	return number;
}
char *student::GetSpec()
{
	return speciality;
}
void student::Display()
{
	cout << "姓名:" << name << endl;
	cout << "身份证:" << ID << endl;
	cout << "学号:" << number<< endl;
	cout << "专业:" << speciality << endl;
	cout << "年龄:" <<age<< endl<<endl;
}
void student::Input()
{
	char na[10];
	cout << "输入姓名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入身份证:";
	cin >> ID;
	cout << "输入年龄:";
	cin >> age;
	cout << "输入专业:";
		cin >> "speciality";
		cout << "输入学号:";
		cin >> number;
}