#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ex;
    cin >> n >> ex;
    map<ll, ll> sum_fre;
    ll sum = 0;
    ll ans = 0;
    sum_fre[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        ans += sum_fre[sum - ex];
        sum_fre[sum]++;
    }
    cout << ans << endl;
    return 0;
}
