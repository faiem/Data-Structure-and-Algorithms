#include<bits/stdc++.h>
using namespace std;

int* MergeTwoSortedArray(int* a, int a_size, int* b, int b_size)
{
    int size = a_size + b_size;
    int* x = new int[size];

    int I = 0, J = 0, K=0;
    while(I<a_size && J<b_size)
    {
        if(a[I]<b[J])
        {
            x[K] = a[I];
            I++;
            K++;
        }
        else
        {
            x[K] = b[J];
            J++;
            K++;
        }
    }

    while(I<a_size)
    {
        x[K] = a[I];
        I++;
        K++;
    }

    while(J<b_size)
    {
        x[K] = b[J];
        J++;
        K++;
    }

    return x;
}


int main()
{
    int a[] = {5,6,7,8};
    int a_size = sizeof(a) / sizeof(a[0]);
    int b[] = {1,3,4,10};
    int b_size = sizeof(b) / sizeof(b[0]);

    int* x = MergeTwoSortedArray(a, a_size, b, b_size);
    int x_size = a_size + b_size;

    for(int I=0;I<x_size;I++)
    {
        printf("%d ", x[I]);
    }
    printf("\n");

    //clear the memory from heap
    delete[] x;

    return 0;
}