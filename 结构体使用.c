#include <stdio.h>
#include <string.h>
struct Student
{
	int sid;
	char name[200];
	int age;
};

int main(void)
{
	struct Student st = {100, "zhangshang",20};
	struct Student *pst;
	pst = &st;
	pst->sid = 99;//pst->sid �ȼ��ڣ�*pst��.sid
	//��pst->sid �ȼ��� st.sid
	 
	return 0;
}
