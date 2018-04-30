#include <iostream>
using namespace std;
#include "teacher.h"
#include "student.h"
void showTeacher(teacher *t)
{
	student *st[5];
	for (int i = 0; i < 5; i++, t++) {
		cout << t->getName() << " " << t->getRese();
		st[i] = t->getAdd();
	}
	for (int i = 0; i < 5; i++)
		cout << st[i]->getName() << st[i]->getId() << st[i]->getAge();
}

//void showStudent(student *s)
//{
//	for (int i = 0; i < 5; i++, s++)
//		cout << s->getName() << s->getId() << s->getAge() << endl;
//}
int main()
{

	teacher tch[5] = {teacher("你好老师","移动应用"),
					  teacher ("那天老师","互联网"),
					  teacher ("昨天老师","电脑"),
					  teacher("天老师","互联"), 
		              teacher("那老师","互网")};
	student st[5] = {
		student("小明","0001",23),
		student("小红","0002",24),
		student("小黑","0003",34),
		student("小黑","0003",34),
		student("小黑","0003",34)
	};
	showTeacher(&tch[0]);
	/*showStudent(&st[0]);*/
	system("pause");
	return 0;
}