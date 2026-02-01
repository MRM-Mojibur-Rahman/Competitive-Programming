#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int difa = abs(n - m);
        if(difa>k) cout<<difa-k<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
