#include<bits/stdc++.h>
using namespace std;

void insertionSort(int* arr, int size)
{
    for(int I=1;I<size;I++)
    {
        int key = arr[I];
        int J;

        for(J=I-1;J>=0;J--)
        {   
            if(arr[J]>key)
            {
                arr[J+1] = arr[J];
            }
            else
            {
                break;
            }
        }

        arr[J+1] = key;
    }    


    //printing
    for(int I=0;I<size;I++)
    {
        printf("%d ", arr[I]);        
    }
}


int main()
{
    int arr[] = {10,2,1,20};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, arr_size);
    return 0;
}