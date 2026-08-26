#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int k,m;cin>>k>>m;
    int cnt =0;
    while (m!=1)
    {
        if(m%k!=0 )
        {
            cout<<"NO\n";
            return;
        }
        m/=k;
        cnt++;
    }

    cout<<"YES\n";
    cout<<cnt-1<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
