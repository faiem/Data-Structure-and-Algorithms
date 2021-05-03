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

//number -> find the 'K'th bit is 1 or not
bool Check_Kth_Bit_is_Set_by_leftShiftOperation(int number, int k)
{
    //using left shift
    int mask = 1 << (k-1);

    //suppose number is 13 (0000 ... 0000 1101)
    //creating mask = 0000 ... 0000 0100
    //And them:
    //0000 ... 0000 1101
    //0000 ... 0000 0100 (&)
    //--------------------
    //0000 ... 0000 0100 (output) > 0
    // if output is greater than 0 then the Kth bit is set otherwise not

    if((number & mask) > 0)
    {
        return true;
    }

    return false;
}


//number -> find the 'K'th bit is 1 or not
bool Check_Kth_Bit_is_Set_by_rightShiftOperation(int number, int k)
{
    //using right shift
    int mask = number >> (k-1);

    //let, number is 13 (0000 ... 0000 1101)
    //creating mask = 0000 ... 0000 0011 by right shifting number by k-1 times
    //And them:
    //0000 ... 0000 1101
    //0000 ... 0000 0011 (&)
    //--------------------
    //0000 ... 0000 0001 (output) == 1
    // if output is 1 then the Kth bit is set otherwise not

    if(mask & 1)
    {
        return true;
    }

    return false;
}


int main()
{
    cout<<Check_Kth_Bit_is_Set_by_leftShiftOperation(13, 3)<<endl;
    cout<<Check_Kth_Bit_is_Set_by_rightShiftOperation(13, 3)<<endl;

    cout<<Check_Kth_Bit_is_Set_by_leftShiftOperation(13, 2)<<endl;
    cout<<Check_Kth_Bit_is_Set_by_rightShiftOperation(13, 2)<<endl;

    return 0;
}