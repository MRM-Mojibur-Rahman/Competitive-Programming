#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a;
    cin >> a;
    ll n = a.size();
    ll fst = 0;
    ll idx = 0;
    while (idx < n && a[idx] == '1')
    {
        fst++;
        idx++;
    }
    ll longest1 = fst, tem = 0;
    for (; idx < n; idx++)
    {
        if (a[idx] == '1')
        {
            tem++;
        }
        else
        {

            longest1 = max(longest1, tem);
            tem = 0;
        }
    }

    longest1 = max(longest1, fst + tem);
    if (longest1 <= 1)
        cout << longest1 << endl;
    else if (longest1 == n)
        cout << longest1 * n << endl;
    else
    {
        if(longest1%2==0)
        cout << (longest1 / 2) * (longest1 / 2 + 1) << endl;
        else cout<<(longest1+1)/2 * (longest1+1)/2<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
