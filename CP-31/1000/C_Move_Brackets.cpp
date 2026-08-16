#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    int cntl =0 , cntr =0 ;
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        char x;cin>>x;
        if(x=='(') cntl++;
        else cntr++;
        if(cntr>cntl) ans++,cntl++;
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
