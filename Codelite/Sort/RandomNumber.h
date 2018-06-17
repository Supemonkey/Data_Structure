#ifndef _RandomNumber_H_
#define _RandomNumber_H_
#include <ctime>
#include "BubleSort.cpp"
#include "SelectSort.cpp"
//为什么需要包含头文件

template <typename T>
void BubleSort(T array[], int n);

template <typename T>
void SelectSort(T array[],int n);

void RandomNum(int array[],int n)
{
    srand(time(NULL));
    for(int i=0;i<n;++i){
        array[i] = rand() % n+1;
    }
}

template <typename T>
void ShowArray(T array[], int n)
{
    for(int i=0;i<n;++i){
        cout << array[i] << " ";
    }
    cout << endl;
}
#endif