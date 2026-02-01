#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, total=0;
    cin >> n >> k;
    vector<ll>divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            total++;
            if (n / i != i)
                total++,divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());

    if(k>total)
    {
        cout<<-1<<endl;
    }
    else cout<<divisors[k-1]<<endl;
   

    return 0;
}
