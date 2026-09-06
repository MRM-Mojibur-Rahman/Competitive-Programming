#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 1;

vector<int> ans(N + 1, 0);
vector<bool> isPrime(N + 1, true);

bool withOutZero(int n)
{
    while (n)
    {
        if (n % 10 == 0)
            return false;
        n /= 10;
    }
    return true;
}
bool transtruncations(int n)
{
    string a = "";
    string var = "";
    while (n > 0)
    {
        if ((n % 2 == 0 && n != 2) || !isPrime[n])
            return false;
        a = to_string(n);
        var = a[0];
        n -= stoi(var) * pow(10, a.size() - 1);
    }
    return true;
}
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
        isPrime[i] = false;
}
void fillAns()
{

    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] && withOutZero(i) && transtruncations(i))
        {
            {
                ans[i] += ans[i - 1] + 1;
            }
        }
        else
            ans[i] = ans[i - 1];
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << ans[n] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    sieve();
    fillAns();
    while (t--)
    {
        solve();
    }
    return 0;
}
