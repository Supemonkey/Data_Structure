#include <iostream>
using namespace std;
#include "teacher.h"
#include "student.h"
void show(teacher *t)
{
	for (int i = 0; i<3; i++, t++)
		cout << t->getName() << " " << t->getRese();
}

int main()
{

	teacher tch[3] = {teacher("你好老师","移动应用"),
					  teacher ("那天老师","互联网"),
					  teacher ("明天老师","电脑")};
	student st[5] = {
		student("小明","0001",23),
		student("小红","0002",24),
		student("小黑","0003",34),
		student("小黑","0003",34),
		student("小黑","0003",34)
	};
	show(&tch[0]);
	system("pause");
	return 0;
}