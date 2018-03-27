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
	struct Student st = {1000,"zhangshang",20};
	printf("%d,%s,%d\n",st.sid,st.name,st.age);
	
	st.sid = 99;
	//st.name = "list";//不能这样直接赋值 
	strcpy(st.name,"list");
	st.age = 22;
	printf("%d,%s,%d\n",st.sid,st.name,st.age);
	return 0;
}
