#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a) cin>>it;
    map<int,int>prime_fact;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j*j<= a[i]; j++)
        {
            while (a[i]%j==0)
            {
                prime_fact[j]++;
                a[i]/=j;
            }
            
        }
        if(a[i]>1) prime_fact[a[i]]++;
        
    }
    auto ok = [&]()
    {
        for(auto [x,y] : prime_fact)
        {
            if(y%n!=0) return false;
        }
        return true;
    };
    if(ok()) cout<<"YES\n";
    else cout<<"NO\n";

    
    
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
