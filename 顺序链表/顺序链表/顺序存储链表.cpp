#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Lnode{
    char data;
    struct Lnode *next;
}Node, *NodeList;

Node *p, *q, *head;
char m = sizeof(Node);

void createNode()
{
    p = (Node *)malloc(m);
    head = p;//ͷָ��ָ���һ���ڵ�
    for(int i=0;i<26;++i){
        p->data = 'a' + i;
        q = (Node *)malloc(m);//����һ���ӣ�����һ���ڵ�
        p->next = q;//��������
        p = q;//Ϊ����һ���ڵ������
    }
    p->data = 'z';//�������һ���ڵ�
    p->next = NULL;
}

void showList()
{
    p = head;//������ɺ�pָ��ĩβ��ַ
    for(int i=0;i<26;++i){
        cout << p->data<<" ";
        p=p ->next ;//ָ����һ���ڵ�
    }
}

int main()
{
    createNode();
    showList();
    system("pause");
    return 0;
}