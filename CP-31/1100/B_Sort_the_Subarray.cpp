#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    int l = 1;
    while (l <= n && a[l] == b[l]) l++;

    int r = n;
    while (r >= 1 && a[r] == b[r]) r--;

   

//    cout<<l<<" "

    while (l > 1 && b[l - 1] <= b[l]) l--;
    while (r < n && b[r + 1] >=b[r]) r++;

    cout << l << " " << r << '\n';
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
