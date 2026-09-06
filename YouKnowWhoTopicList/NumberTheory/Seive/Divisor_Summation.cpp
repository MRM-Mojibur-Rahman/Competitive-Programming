#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mxn = 1e6;
vector<int> spf(mxn + 1, 0);
void buildSPF()
{
    for (int i = 2; i <= mxn; i += 2)
        spf[i] = 2;

    for (int i = 3; 1LL * i * i <= mxn; i += 2)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;

            for (int j = i * i; j <= mxn; j += 2 * i)
            {
                if (spf[j] == 0)
                    spf[j] = i;
            }
        }
    }

    for (int i = 3; i <= mxn; i += 2)
        if (spf[i] == 0)
            spf[i] = i;
}

int sumOfDivi(int n)
{
    int sum = 1;
    map<int, int> mp;
    while (n > 1)
    {
        mp[spf[n]]++;
        n /= spf[n];
    }
    for (auto [x, y] : mp)
    {
        
        int p = 1;
        int s = 1;
        for (int i = 0; i < y; i++)
        {
            p *= x;
            s += p;
        }
        sum*=s;
    }
    return sum;
}
void solve()
{
    int n;
    cin >> n;
    cout << sumOfDivi(n) -n << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    buildSPF();
    while (t--)
    {
        solve();
    }
    return 0;
}
