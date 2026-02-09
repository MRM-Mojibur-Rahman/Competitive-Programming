#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    map<int,vector<int>>mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if(a[i]%primes[j]==0) 
            {
                mp[primes[j]].push_back(i);
                break;
            }
        }
        
    }
    int color = 1 ;
    for (auto [x,y]:mp)
    {
        for (auto it:y)
        {
            a[it]=color;
        }
        color++;
        
    }
    cout<<mp.size()<<endl;
    for(auto it:a) cout<<it<<" ";
    cout<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
