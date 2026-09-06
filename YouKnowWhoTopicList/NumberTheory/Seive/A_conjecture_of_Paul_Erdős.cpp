#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 1;
vector<bool> isPrime(N, true);
vector<int> ans(N, 0);

void seive()
{
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
}
void paul()
{
    ans[2] = 1;
    for (int i = 1; i * i * i * i < N; i++)
    {
        long x = i * i * i * i;
        for (int j = 1; j * j + x < N; j++)
            if (isPrime[x + j * j] && (x + j * j) % 2 == 1)
                ans[x + j * j] = 1;
    }


    for (int i = 1; i < N; i++)
    {
        ans[i]+=ans[i-1];
    }
    
}

void solve()
{
    int n;
    cin >> n;
    cout<<ans[n]<<endl;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    seive();
    paul();
    while (t--)
    {
        solve();
    }
    return 0;
}
