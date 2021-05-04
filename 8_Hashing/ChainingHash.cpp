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

class ChainingHash
{
    int bucket_size;
    list<int> *hash_table;

    public:

        ChainingHash(int table_size)
        {
            bucket_size = table_size;
            hash_table = new list<int>[table_size];
        }

        void Insert(int key)
        {
            int I = key % bucket_size;
            hash_table[I].push_back(key);
        }

        void Delete(int key)
        {
            int I = key % bucket_size;
            hash_table[I].remove(key);
        }

        bool Search(int key)
        {
            int I = key % bucket_size;

            for(auto x : hash_table[I])
            {
                if(x == key)
                    return true;
                return false;
            }
        }
};



int main()
{
    ChainingHash my_hash(7);

    my_hash.Insert(7);
    my_hash.Insert(20);
    my_hash.Insert(10);
    my_hash.Insert(15);
    my_hash.Insert(7);

    cout<<my_hash.Search(20)<<endl;
    
    my_hash.Delete(20);

    cout<<my_hash.Search(20)<<endl;

    return 0;
}