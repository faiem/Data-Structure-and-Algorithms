#include <bits/stdc++.h>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


void test(int x, int &y)
{
    cout<<&x<<" "<<x<<endl;
    cout<<&y<<" "<<y<<endl;
}


int main()
{
    int a=5, b=6;
    cout<<&a<<endl;
    cout<<&b<<endl;
    test(a, b); 
    return 0;
}