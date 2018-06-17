#include <iostream>
using namespace std;


template <typename T>
void BubleSort(T array[], int n)
{
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-1-i;++j){
            if(array[j] > array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}

