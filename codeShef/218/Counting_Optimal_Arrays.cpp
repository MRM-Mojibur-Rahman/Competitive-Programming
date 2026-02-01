#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll maxXor(ll m) {
    int k = 63 - __builtin_clzll(m);
    return (1LL << (k + 1)) - 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n , m ;cin>>n>>m;
        if(n!=1)
        cout<<2*m - maxXor(m)+1<<endl;
        else cout<<m+1<<endl;

    }
    return 0;
}
