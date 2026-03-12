#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
vector<int> palindromes;
void check_palindromes(int i)
{
    string a = to_string(i);
    string tem = a;
    reverse(tem.begin(), tem.end());
    if (tem == a)
        palindromes.push_back(i);
}
vector<ll> dp(4e4 + 1, 0);
void ans()
{
    int len = palindromes.size();
    dp[0] = 1;
    for (int i = 0; i < len; i++)
    {
        for (int sum = palindromes[i]; sum <= 4e4 ; sum++)
        {
            dp[sum] = (dp[sum] + dp[sum - palindromes[i]]) % mod;
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    cout << dp[n] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= 4e4; i++)
        check_palindromes(i);
    ans();
    while (t--)
    {
        solve();
    }
    return 0;
}
