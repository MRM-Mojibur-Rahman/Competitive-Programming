#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 100;
vector<bool> primes(mx, true);
vector<int> allpirmes;
void sieve()
{
    for (int i = 2; i < mx; i++)
    {
        if (primes[i])
        {
            for (int j = 2 * i; j < mx; j += i)
                primes[j] = false;
            allpirmes.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n;
    cin >> n;
    int idx = 0 ;
    // for (auto it :allpirmes)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    
    while (n > 1)
    {
        while (n%allpirmes[idx]==0){
            cout<<allpirmes[idx]<<" ";
            n/=allpirmes[idx];}
        idx++;}

    return 0;
}
