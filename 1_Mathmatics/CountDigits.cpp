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

//Works for both positive and negative number, time complexity O(1)
int countDigits(int number)
{
    if(number == 0)
        return 0;
    
    if(number < 0)
        return countDigits(-1 * number);

    int digits = log10(number) + 1;
    return digits;
}

//It only works for positive int, time complexity O(d), d = num of digits
int countDigits_naiveSolution(int number)
{
    int digits = 0;

    while(number>0)
    {
        number = number / 10;
        digits++;
    }

    return digits;
}

int main()
{
    cout<<countDigits_naiveSolution(1234)<<endl;;

    cout<<countDigits(5030)<<endl; //4
    cout<<countDigits(100)<<endl; //3
    cout<<countDigits(235687)<<endl; //6
    cout<<countDigits(3698)<<endl; //4
    cout<<countDigits(12349)<<endl; //5
    
    //negative value test
    cout<<countDigits(-5030)<<endl; //4
    cout<<countDigits(-100)<<endl; //3
    cout<<countDigits(-235687)<<endl; //6
    cout<<countDigits(-3698)<<endl; //4
    cout<<countDigits(-12349)<<endl; //5

    return 0;
}