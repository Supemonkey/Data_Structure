#include <iostream>
using namespace std;

template <typename T>
void SelectSort(T array[],int n)
{   
    for(int i=0;i<n;++i){
        int minIndex = i;
        for(int j=i+1;j<n;++j){
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
        }
        swap(array[i],array[minIndex]);
    }
}