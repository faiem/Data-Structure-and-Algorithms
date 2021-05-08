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


void generateSubsets(string &input, int I, string &current)
{

    if(I == input.length())
    {
        //Condition for printing the empty string
        if(current == "")
        {
            cout<<"Empty"<<endl;
        }
        else
        {
            cout<<current<<endl;
        }
        return;
    }

    string takeNext = current + input[I]; 

    generateSubsets(input, I+1, current);
    generateSubsets(input, I+1, takeNext);
}


int main()
{
    string s = "ABC";
    string empty_container = "";

    generateSubsets(s, 0, empty_container);
    return 0;
}