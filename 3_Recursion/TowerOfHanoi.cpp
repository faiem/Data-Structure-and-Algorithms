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

void TOH(int n_disk, char moveFrom, char moveTo, char additionalTower)
{
    if(n_disk == 1)
    {
        //move
        cout<<"Move disk 1 from "<<moveFrom<<" to "<<moveTo<<endl;
        return;
    }

    //using moveTo as additional tower for moving 
    TOH(n_disk - 1, moveFrom, additionalTower, moveTo);

    //move
    cout<<"Move disk "<<n_disk<<" from "<<moveFrom<<" to "<<moveTo<<endl;
    
    //using moveFrom as additional tower for moving
    TOH(n_disk - 1, additionalTower, moveTo, moveFrom);
}


int main()
{
    int disk = 3;
    
    TOH(disk, 'A', 'C', 'B');

    return 0;
}