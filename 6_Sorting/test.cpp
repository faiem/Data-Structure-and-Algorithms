#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int n)
{
	int lis[n];

	lis[0] = 1;

	for (int i = 1; i < n; i++) {
		lis[i] = 1;
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;
	}

	return *max_element(lis, lis + n);
}

int main()
{
    int T;
	cin>>T;
    while(T--)
    {   
        int n;
        cin>>n;
        int* arr = new int[n];
        for(int I=0;I<n;I++)
        {
            cin>>arr[I];
        }
        cout<<lis(arr, n)<<endl;
    }
	
	return 0;
}
