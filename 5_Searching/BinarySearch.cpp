#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

bool isFound(int* arr, int size, int searchItem)
{
    int high = size-1, low = 0;
    int mid = 0;
    while(low<high)
    {
        mid = low + (high - low) / 2;

        if(arr[mid] == searchItem)
            return true;
        
        if(arr[mid] > searchItem)
        {
           high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return false;
}


int main()
{
    int arr[] = {3,4,4,4,6,7,10,15,16,20,45,46,47,47,47,53};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout<<isFound(arr, arr_size, 50);
    return 0;
}