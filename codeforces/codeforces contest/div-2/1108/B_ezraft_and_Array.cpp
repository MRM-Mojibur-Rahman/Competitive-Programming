#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
    {
        cout << -1 << endl;
       
    }
    else{
        a = {1, 2, 3};
        ll cnt = 6;
        for (int i = 4; i <=n; i++)
        {
            a.push_back(cnt);
            cnt*=2;
        }
        for(auto it:a) cout<<it<<" ";
        cout<<endl;
        
    }
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
