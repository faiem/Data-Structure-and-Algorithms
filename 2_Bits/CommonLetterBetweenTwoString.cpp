#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

//string a and b are lowercase
bool isAnyCommonLetterExist(string a, string b)
{
    int x=0,y=0;

    for(int I=0;I<a.length();I++)
    {
        int mask = 1<<(a[I]-'a');
        x |= mask;
    }

    for(int I=0;I<b.length();I++)
    {
        int mask = 1<<(b[I]-'a');
        y |= mask;
    }


    return x&y;
}


int main()
{
    string a, b;
    cin>>a;
    cin>>b;
    cout<<isAnyCommonLetterExist(a,b)<<endl;
    return 0;
}