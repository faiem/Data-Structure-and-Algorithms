#include<bits/stdc++.h>
using namespace std;

void selectionSort(int* arr, int size)
{
    //Sorting
    //category: Unstable, but memory efficient.
    for(int I=0;I<size;I++)
    {
        int minIndex = I;
        for(int J=I+1;J<size;J++)
        {
            if(arr[J]<arr[minIndex])
            {
                minIndex = J;
            }
        }

        swap(arr[I], arr[minIndex]);
    }

    for(int I=0;I<size;I++)
    {
        printf("%d ", arr[I]);
    }
}

int main()
{
    int arr[] = {2,3,10,7,9,1,5,6,4,1};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, arr_size);

    return 0;
}