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
    head = p;//头指针指向第一个节点
    for(int i=0;i<26;++i){
        p->data = 'a' + i;
        q = (Node *)malloc(m);//挖下一个坑，存下一个节点
        p->next = q;//进行连接
        p = q;//为填充点一个节点的内容
    }
    p->data = 'z';//设置最后一个节点
    p->next = NULL;
}

void showList()
{
    p = head;//创建完成后，p指向末尾地址
    for(int i=0;i<26;++i){
        cout << p->data<<" ";
        p=p ->next ;//指向下一个节点
    }
}

int main()
{
    createNode();
    showList();
    system("pause");
    return 0;
}