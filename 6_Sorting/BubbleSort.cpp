#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int* arr, int size)
{
    //sorting
    for(int I=0;I<size;I++)
    {
        for(int J=0;J<size-I-1;J++)
        {
            if(arr[J] > arr[J+1])
            {
                swap(arr[J], arr[J+1]);
            }
        }
    }

    //printing the array
    for(int I=0;I<size;I++)
    {
        printf("%d ", arr[I]);
    }

}


int main()
{
    int arr[] = {3,5,6,10,2,4,20};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, arr_size);

    return 0;
}