#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        map<ll,ll>pairs;
        ll total_pairs = 0 ;
        for (int i = 0; i < n; i++)
        {
            ll x;cin>>x;
            ll xorOfX = x^((1LL<<31)-1);
            if(pairs[xorOfX]!=0)
            {
                pairs[xorOfX]--;
                total_pairs++;
            }
            else{
                pairs[x]++;
            }
        }
        for (auto x : pairs)
        {
            total_pairs+=x.second;
        }
        cout<<total_pairs<<endl;
        

        
    }
    return 0;
}
