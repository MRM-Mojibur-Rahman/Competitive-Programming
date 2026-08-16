#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll qr, qc;
    cin >> qr >> qc;
    ll kr, kc;
    cin >> kr >> kc;
    set<pair<ll, ll>> qu, ki;
  
            qu.insert({qr+x,qc+y});
            qu.insert({qr+x,qc-y});
            qu.insert({qr-x,qc+y});
            qu.insert({qr-x,qc-y});
            ki.insert({kr+x,kc+y});
            ki.insert({kr+x,kc-y});
            ki.insert({kr-x,kc+y});
            ki.insert({kr-x,kc-y});

            qu.insert({qr+y,qc+x});
            qu.insert({qr+y,qc-x});
            qu.insert({qr-y,qc+x});
            qu.insert({qr-y,qc-x});
            ki.insert({kr+y,kc+x});
            ki.insert({kr+y,kc-x});
            ki.insert({kr-y,kc+x});
            ki.insert({kr-y,kc-x});

        ll ans = 0 ;
        for(auto it:ki)
        {
            
            if(qu.find(it)!=qu.end()) ans++;
        }
        cout<<ans<<endl;
      

      
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
