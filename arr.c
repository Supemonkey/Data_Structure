#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//定义一个数组类型，该数据类型的名字叫做struct arr 
struct Arr
{
	int *pBase;//数组成员首地址，
	int len;//长度
	int cnt;//当前有效元素类型的个数 
};

bool append_arr();
bool insert_arr();
bool delete_arr();
int get();
bool is_empty();
bool is_full();
void sort_arr();
void show_arr(struct Arr *pshow);
void inversion_arr();
void init_arr(struct Arr *pArr);

bool appen_arr()
{
	
}

int main()
{
	struct Arr arr;
	init_arr(&arr);
	show_arr(&arr);
	system("pause");
	return 0;
}

void init_arr(struct Arr *array)
{
	array->pBase=(int *)malloc(sizeof(int));
	array->cnt=0;
	array->len=1;

}

void show_arr(struct Arr *pshow)
{
	if(pshow->pBase==NULL){
		printf("array is empty\n");
	}
	else {
		for(int i = 0;i<pshow->len;i++){
			printf("%d\n",pshow->cnt);
		}
	}
}
