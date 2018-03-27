#include <stdio.h>
#include <malloc.h>

struct Student
{
	int sid;
	int age;
	int name;
};

struct Student *CreateStudent()
{
	struct Student *p = (struct Student*)malloc(sizeof(struct Student));
	p->sid = 99;
	p->age=88;
	p->name=234;
	return p;
}

void ShowStudent(struct Student *pst)
{
	printf("%d,%s,%d\n",pst->sid,pst->age,pst->name);
}
int main()
{
	struct Student *ps;
	ps = CreateStudent();
	ShowStudent(ps);
	return 0;
}
