#include <iostream>

using namespace std;
#include "RandomNumber.h"
int main()
{   
    int a[10];
    RandomNum(a,10);
    BubleSort(a,10);
    //SelectSort(a,10);
    ShowArray(a,10);
    system("pause");
    return 0;
}