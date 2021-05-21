#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    if(a<b)
    {
        return true;        
    }

return false;
}

void Stl_sort(int* arr, int size)
{
    sort(arr, arr+size);
    for(int I=0;I<size;I++)
    {
        printf("%d ", arr[I]);
    }

    printf("\n");

    sort(arr, arr+size, greater<int>());
    for(int I=0;I<size;I++)
    {
        printf("%d ", arr[I]);
    }

    printf("\n");

    sort(arr, arr+size, compare);
    for(int I=0;I<size;I++)
    {
        printf("%d ", arr[I]);
    }

}



int main()
{
    int arr[] = {5,2,6,9,8,7,3,6,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    Stl_sort(arr, arr_size);

    return 0;
}