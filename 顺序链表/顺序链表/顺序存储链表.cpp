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
    head = p;//ͷָ��ָ���һ���ڵ�
    for(int i=0;i<26;++i){
        p->data = 'a' + i;
        q = (Node *)malloc(m);//����һ���ӣ�����һ���ڵ�
        p->next = q;//��������
        p = q;//Ϊ����һ���ڵ������
        length++;
    }
    ++length;
    p->data = 'z';//�������һ���ڵ�
    p->next = NULL;
}

void showList()
{
    p = head;//������ɺ�pָ��ĩβ��ַ
    for(int i=0;i<26;++i){//����while(p) ����
        cout << p->data<<" ";
        p=p ->next ;//ָ����һ���ڵ�
    }
}

void deletNode(char data)
{
    p = head;
    //q = head;
    while(p){
        if(p->data == data){
            if(p == head){//ͷ�ڵ�
                head = p->next;
                free(p);
            }
            else if(p->next->next == NULL){//�ж�δ�ڵ�
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