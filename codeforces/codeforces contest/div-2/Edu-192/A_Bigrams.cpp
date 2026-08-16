#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a) cin>>it;
    bool isTwo = false;
    for (int i = 0; i < n; i++)
    {
        if(isTwo && a[i]>=2) 
        {
            cout<<"YES\n";
            return;
        }
        else if (a[i]>2) {cout<<"YES\n";return;}
        if(a[i]==2) isTwo = true;

    }
    cout<<"NO\n";return;
    
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
