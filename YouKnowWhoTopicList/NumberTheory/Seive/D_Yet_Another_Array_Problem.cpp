#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(auto &it:a) cin>>it;
    ll ans = 59;
    vector<ll> prime = {2, 3, 5, 7, 11, 13, 17,
                        19, 23, 29, 31, 37, 41, 43, 47,53};

    for (int i = 0; i < n; i++)
    {
        for(auto it:prime) 
        {
            if(a[i]%it!=0)
            {
                ans =min(ans,it);
                break;
            }
        }
    }

    if(ans==59) cout<<-1<<endl;
    else cout<<ans<<endl;
    
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
