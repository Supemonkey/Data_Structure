#include <iostream>
using namespace std;
#include "teacher.h"
#include "student.h"
void showTeacher(teacher *p,student *x)
{
	for (int i = 0; i < 5; i++,p++,x++) {
		cout << p->getTName() << " " << p->getTRese() << endl;
		p->getArry(x);
	}
}

//void showStudent(student *s)
//{
//	for (int i = 0; i < 5; i++, s++)
//		cout << s->getName() << s->getId() << s->getAge() << endl;
//}
int main()
{

	teacher tch[5] = {teacher("�����ʦ","�ƶ�Ӧ��"),
					  teacher ("������ʦ","������"),
					  teacher ("������ʦ","����"),
					  teacher("����ʦ","����"), 
		              teacher("����ʦ","����")};
	student st[5] = {
		student("С��","0001",23),
		student("С��","0002",24),
		student("С��","0003",34),
		student("С��","0003",34),
		student("С��","0003",34)
	};
	showTeacher(&tch[0],&st[0]);
	/*showStudent(&st[0]);*/
	system("pause");
	return 0;
}