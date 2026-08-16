#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, k;
    cin >> n >> k;
    vector<double> a(n);
    for (auto &it : a)
        cin >> it;
    double cnt = 0, tem = 0;
    double l = 0, r = 0;
    tem += a[0];
    while (r < n)
    {
        if (r - l + 1 == k)
        {
            cnt += tem;
            tem -= a[l];
            l++;
        }
        r++;
        tem += a[r];
    }
    double ans = cnt / (n - k + 1);
    cout<<fixed  << setprecision(10) << ans << endl;

    return 0;
}
