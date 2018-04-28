#include "student.h"
#include <iostream>
using namespace std;


student::student()
{
	this->name = "-1";
	this->id = "-1";
	this->age = -1;
}


student::student(string name, string id, int age)
{
	this->name = name;
	this->id = id;
	this->age = age;
}

