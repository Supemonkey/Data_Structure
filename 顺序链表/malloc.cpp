#include <iostream>

using namespace std;



int main()
{
    int a;
    int *p = (int *) malloc(2*sizeof(int));
    cout << p << endl;
    free(p);//�ڴ��ͷź�p��ָ����Ȼ���䣬ֻ�ǿ���ʹ���ڴ����·���
    cout << p;
    system("pause");
    return 0;
}