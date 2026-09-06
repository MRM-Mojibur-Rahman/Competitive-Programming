#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e8 + 1;
vector<bool> isPrime(N + 1, true);
vector<int> prime;
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 3; i * i < N; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += 2 * i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 4; i < N; i += 2)
    {
        isPrime[i] = false;
    }

    prime.push_back(2);
    for (int i = 3; i < N; i += 2)
    {
        if (isPrime[i])
            prime.push_back(i);
    }
}
void solve()
{
    int n;
    cin >> n;
    if (!isPrime[n])
    {
        cout << -1 << endl;
        return;
    }
    int x = lower_bound(prime.begin(), prime.end(), n) - prime.begin() + 1;
    int i = (sqrt((8 * x + 1)) - 1) / 2;
    int tem = ((i * (i + 1)) / 2);
    int j = x - tem;

    if (tem == x)
    {
        j = i;
    }
    else
        i++;
    cout << i << " " << j << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
