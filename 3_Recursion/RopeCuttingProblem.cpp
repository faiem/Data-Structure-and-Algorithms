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

//this fucntion return negative if rope cus is impossible
int getMaxRopeCut(int ropeLength, int a, int b, int c)
{
    if(ropeLength == 0)
    {
        return 0;
    }
    
    int tryWithLengthA = (ropeLength - a) >= 0 ?
    1 + getMaxRopeCut(ropeLength - a, a, b, c)
    : -10000000;

    int tryWithLengthB = (ropeLength - b) >= 0 ?
    1 + getMaxRopeCut(ropeLength - b, a, b, c)
    : -10000000;

    int tryWithLengthC = (ropeLength - c) >= 0 ?
    1 + getMaxRopeCut(ropeLength - c, a, b, c)
    : -10000000;

    return MAX(MAX(tryWithLengthA, tryWithLengthB), tryWithLengthC);
}

//this solutiuon return -1 if the rope cutting is impossible
int gfg_max_rope_cut_solution(int ropeLength, int a, int b, int c)
{
    if(ropeLength == 0)
    {
        return 0;
    }

    if(ropeLength < 0)
        return -1;

    int tryWithLengthA = gfg_max_rope_cut_solution(ropeLength-a, a, b, c);
    int tryWithLengthB = gfg_max_rope_cut_solution(ropeLength-b, a, b, c);
    int tryWithLengthC = gfg_max_rope_cut_solution(ropeLength-c, a, b, c);
       
    int max_res = MAX(MAX(tryWithLengthA, tryWithLengthB), tryWithLengthC);

    if(max_res < 0)
        return -1; 

    return 1 + max_res;
}



int main()
{
    int a = 4, b = 2, c = 6;
    int n = 5;
    cout<<gfg_max_rope_cut_solution(n, a, b, c);
    return 0;
}