#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*when i try to solve this problem i difficulty how to do this i simulate this on wrong way 
i did not find any way then i try randomly and solve it 
next time i should avoid that don stuck on it just do whatever feel */
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0, l = 0, r = 0, sum = 0;
    while (r < n)
    {
        sum += v[r];

            while (sum > s)
            {
                sum = sum - v[l];
                l++;
            }
        ans += r - l + 1;

        r++;
    }
    cout << ans << endl;

    return 0;
}
