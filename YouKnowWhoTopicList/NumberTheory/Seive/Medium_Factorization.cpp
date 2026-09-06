#include <bits/stdc++.h>
using namespace std;

const int mxn = 1e7;
vector<int> spf(mxn + 1, 1);
void sieve() // Nlog(logN)
{
    for (int i = 2; i <= mxn; i+=2)
    {
        spf[i]=2;
    }
    for (int i = 3; 1LL * i * i <= mxn; i += 2)
    {
        if (spf[i] == 1)
        {

            spf[i]=i;
            for (int j = i * i; j <= mxn; j += 2 * i)
            {
                if (spf[j] == 1)
                    spf[j] = i;
            }
        }
    }
}
vector<int> getFactorization(int n) // log(N)
{
    vector<int> factorization = {1};
    while (n > 1)
    {
            factorization.push_back(spf[n]);
            n /= spf[n];
    }
    return factorization;
}

void solve(int n)
{
    vector<int> ans = getFactorization(n);

    cout << ans[0];

    for (int i = 1; i < ans.size(); i++)
        cout << " x " << ans[i];

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n;
    while (cin >> n)
        solve(n);

    return 0;
}