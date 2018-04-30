#include "teacher.h"
#include <string>
#include <iostream>
using namespace std;
#include "student.h"
teacher::teacher(string name, string rese)
{
	this->name = name;
	this->rese = rese;
	
}
string teacher::getName()
{
	return name;
}

string teacher::getRese()
{
	return rese;
}

student * teacher::getAdd()
{
	return &st[0];
}
