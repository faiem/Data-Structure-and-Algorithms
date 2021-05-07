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

int digitSum(int n)
{
    //making it efficient
    // if(n==0)
    //     return 0;
    if(n <= 9)
        return n;

    return (n%10) + digitSum(n/10);
}



int main()
{
    int x;
    cin>>x;
    cout<<digitSum(x)<<endl;
    return 0;
}