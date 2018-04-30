#pragma once
#include <string>
using namespace std;
#include "student.h"
class teacher
{
	private:
		string name;
		string rese;
		student st[5];
	public:
		teacher(string name, string rese);
		string getName();
		string getRese();
		student  *getAdd();
};

