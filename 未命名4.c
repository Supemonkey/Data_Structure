#include <stdio.h> 

void f(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int main()
{
	int a = 1,b = 2;
	f(&a,&b);
	printf("%d,%d\n",a,b);
	
}
