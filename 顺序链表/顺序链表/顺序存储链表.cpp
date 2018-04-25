#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Lnode{
    char data;
    struct Lnode *next;
}Node, *NodeList;

Node *p, *q, *head;
char m = sizeof(Node);
int length=0;

void createNode()
{
    p = (Node *)malloc(m);
    head = p;//头指针指向第一个节点
    for(int i=0;i<26;++i){
        p->data = 'a' + i;
        q = (Node *)malloc(m);//挖下一个坑，存下一个节点
        p->next = q;//进行连接
        p = q;//为填充点一个节点的内容
        length++;
    }
    ++length;
    p->data = 'z';//设置最后一个节点
    p->next = NULL;
}

void showList()
{
    p = head;//创建完成后，p指向末尾地址
    for(int i=0;i<26;++i){//可以while(p) 代替
        cout << p->data<<" ";
        p=p ->next ;//指向下一个节点
    }
}

void deletNode(char data)
{
    p = head;
    //q = head;
    while(p){
        if(p->data == data){
            if(p == head){//头节点
                head = p->next;
                free(p);
            }
            else if(p->next->next == NULL){//判断未节点
                p->next = NULL;
                free(p->next);

            }
            else {
                p->next=p->next->next;
                free(p->next);
            }
        }
        p = p->next;
    }
    
}

int main()
{
    createNode();
    showList();
    cout << length << endl;
    deletNode('b');
    system("pause");
    return 0;
}