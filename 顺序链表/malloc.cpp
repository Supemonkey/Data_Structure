#include <iostream>

using namespace std;



int main()
{
    int a;
    int *p = (int *) malloc(2*sizeof(int));
    cout << p << endl;
    free(p);//内存释放后，p的指向仍然不变，只是可以使改内存重新分配
    cout << p;
    system("pause");
    return 0;
}