#include <stdio.h> 
#include <string.h> 
struct Student
{
	int sid;
	char name[200];
	int age;
};

void f(struct Student *pst)
{
	(*pst).sid = 999;
	strcpy(pst->name,"zhangshan");
	pst->age =24;
}
void g(struct Student st) 
{//���ڴ棬��ʱ�� 
	printf("%d,%s,%d\n",st.sid,st.name,st.age);
}

void g1(struct Student *pst) 
{//ֱ�Ӵ���ָ�� 
	printf("%d,%s,%d\n",pst->sid,pst->name,pst->age);
}

int main(void)
{
	struct Student st;
	f(&st);
	g1(&st);
//	printf("%d,%s,%d\n",st.sid,st.name,st.age);
	return 0;
}
