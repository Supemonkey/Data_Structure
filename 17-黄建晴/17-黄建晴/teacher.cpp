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
string teacher::getTName()
{
	return name;
}

string teacher::getTRese()
{
	return rese;
}

void teacher::getArry(student *p)
{ 
		cout <<p->getName() <<" "<< p->getId()<<" "<<p->getAge() <<endl;	
}

