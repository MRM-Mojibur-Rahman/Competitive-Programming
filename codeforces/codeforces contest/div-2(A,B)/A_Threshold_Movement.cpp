#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    if(n%2==1) {cout<<"NO\n";return;}
    int mx = a[0], mn = a[1];
    for (int i = 2; i < n-1; i+=2)
    {
        mx=min(a[i],mx);
        mn=max(a[i+1],mn);
    }
    // cout<<mx<<" "<<mn<<endl;
    if(abs(mx-mn)==1 || mn>=mx ) {cout<<"NO\n";return;}

    cout<<"YES\n";
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
