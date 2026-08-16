#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    string a;cin>>a;
    
    int as =0 ,bs =0 ;
    for (int i = 0; i < n; i++)
    {
        if(a[i]=='a') as++;
        else bs++;
    }
    cout<<as<<" "<<bs<<endl;
    
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
