#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int lg = 31 - __builtin_clz(n);
        int l = (1<<lg);
        int ans = max((n-l+1),(1<<(lg-1)));
        cout<<ans<<endl;
    }
    return 0;
}
