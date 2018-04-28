#pragma once
#include <string>
using namespace std;

class teacher
{
	private:
		string name;
		string rese;
		/*struct student
		{
			string name;
			string id;
			int age;
		};*/
		student st[5];
		typedef struct student info;
	public:
		teacher(string name, string rese);
		string getName();
		string getRese();
};

