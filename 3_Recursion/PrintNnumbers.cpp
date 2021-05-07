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

void print_Nto1_numbers(int n)
{
    if(n==0)
        return;
    
    cout<<n<<" ";

    print_Nto1_numbers(n-1);
}

void print_1toN_numbers(int n)
{
    if(n==0)
        return;
    
    print_1toN_numbers(n-1);

    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"input N:";
    cin>>n;
    print_Nto1_numbers(n);
    cout<<endl;
    print_1toN_numbers(n);

    return 0;
}