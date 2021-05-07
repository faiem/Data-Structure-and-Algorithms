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

bool isPalindrome(string &str, int start, int end)
{
    if(start >= end)
        return true;

    return (str[start] == str[end]) && isPalindrome(str, start+1, end-1);
}


int main()
{

    string str;
    cin>>str;
    cout<<isPalindrome(str, 0, str.length()-1);

    return 0;
}