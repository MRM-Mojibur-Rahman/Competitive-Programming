#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll mx = n / i;
            cout << mx * (i - 1) << " " << mx << '\n';
            return;
        }
    }

    // n is prime
    cout << 1 << " " << n - 1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// bool isPrime(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     if (isPrime(n))
//         cout << 1 << " " << n - 1 << endl;
//     else
//     {

//         vector<int> divs;
//         for (int i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 divs.push_back(i);
//                 if (n / i != i)
//                     divs.push_back(n / i);
//             }
//         }

//         sort(divs.begin(), divs.end());
//         cout << divs[divs.size() - 1] * (divs[0] - 1) << " " << divs[divs.size() - 1] << endl;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
