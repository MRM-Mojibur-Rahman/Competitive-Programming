#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    ll p;
    if (n % 2 == 0)
    {
         p = (k % n) + 1;
    }
    else
    {

        p = ((k + (k / (n / 2))) % (n))+1;
    }
    cout<<p<<endl;
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
