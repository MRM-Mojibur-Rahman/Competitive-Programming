#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    ll ans = 1LL*n*(n+1)/2;
    for (int i = 0; i < n-1; i++)
    {
        int x;
        cin>>x;
        ans-=x;
    }
    cout<<ans<<endl;
    
    return 0;
}
