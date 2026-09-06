#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector < int > a(n);
    for (auto & it: a)
        cin >> it;


    int tem = __gcd(a[0], a[n - 1]);

        cout << tem << endl;

   



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