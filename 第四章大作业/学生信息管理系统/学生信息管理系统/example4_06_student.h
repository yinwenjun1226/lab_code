#pragma once
#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<cstring>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
	static int ccount; //ʵ����Ч��ѧ��������С�ڵ��ڶ���ĸ���
public:
	Student();
	Student(char *na, char *id, char *num, char *spec, int ag);
	Student(const Student &per);
	~Student();
	char* Getname() const;//���Զ���Ϊ����Ա����
	char* Getid();     //�����Զ���Ϊ����Ա����
	char* Getnumber();     //�����Զ���Ϊ����Ա����
	char* Getspec();     //�����Զ���Ϊ����Ա����
	int Getage() const;
	void Display() const;
	void Input();
	void Insert();
	void Delete();
	static int Getccount();  //�����ӵľ�̬��Ա����
};

#endif