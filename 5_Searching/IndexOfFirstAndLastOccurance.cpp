#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

//find the first occurance index in an array, if matched return index otherwise
//return -1
int getIndexOfFirstOccurance(int* arr, int size, int searchItem)
{
    int low = 0, high = size - 1;
    int mid = 0;

    while(low<high)
    {
        mid = low + (high - low) / 2;
        
        //cout<<low<<" "<<high<<" "<<mid<<endl;
        
        if(arr[mid] == searchItem)
        {
            if(mid == 0)
            {
                return mid;
            }

            if(arr[mid - 1] == searchItem)
            {
                high = mid;
            }
            else
            {
                return mid;
            }
        }
        else if(arr[mid] > searchItem)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    //cout<<low<<" "<<high<<endl;

    return -1;
}


int getIndexOfLastOccurance(int* arr, int size, int searchItem)
{
    int low = 0, high = size - 1;
    int mid = 0;

    while(low<high)
    {
        mid = low + (high - low) / 2;

        cout<<low<<" "<<high<<" "<<mid<<endl;

        if(arr[mid] == searchItem)
        {
            if(mid == (size-1))
            {
                return mid;
            }

            if(arr[mid + 1] == searchItem)
            {
                low = mid;
            }
            else
            {
                return mid;
            }

        }
        else if(arr[mid] > searchItem)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout<<"->"<<low<<" "<<high<<" "<<mid<<endl;
    return -1;
}

int main()
{
    int searchItem = 0;
    int arr[] = {1,1,2,3,5,5,5,6,6,6,20,20,20,20,20};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Input SearchItem: ";
    cin>>searchItem;
    int output = getIndexOfFirstOccurance(arr, arr_size, searchItem);
    cout<<"First Occurance Index = "<<output<<endl;
    output = getIndexOfLastOccurance(arr, arr_size, searchItem);
    cout<<"Last Occurance Index = "<<output<<endl;

    return 0;
}