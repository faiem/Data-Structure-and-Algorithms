#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

#define mp             make_pair
#define pb             push_back
#define fi             first
#define se             second
#define sz(x)          (int)((x).size())

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


int func(int n)
{
    if(n==1)
        return 1;
    
    int x = 1 + func(n/2);
    //cout<<x<<endl;
    return x;
}

int main()
{
    int y;
    cin>>y;
    int x = func(y);
    cout<<"-->"<<x<<endl;
    return 0;
}