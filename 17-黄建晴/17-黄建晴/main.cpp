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

	teacher tch[3] = {teacher("�����ʦ","�ƶ�Ӧ��"),
					  teacher ("������ʦ","������"),
					  teacher ("������ʦ","����")};
	student st[5] = {
		student("С��","0001",23),
		student("С��","0002",24),
		student("С��","0003",34),
		student("С��","0003",34),
		student("С��","0003",34)
	};
	show(&tch[0]);
	system("pause");
	return 0;
}