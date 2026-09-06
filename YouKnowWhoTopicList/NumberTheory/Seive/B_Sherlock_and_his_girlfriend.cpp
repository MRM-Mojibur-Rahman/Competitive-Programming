#include <bits/stdc++.h>
using namespace std;
#define ll long long
// const
// vector<bool> isPrime(N + 1, true);
// vector<int> prime;
// void sieve()
// {
//     isPrime[0] = isPrime[1] = false;
//     for (int i = 3; i * i < N; i += 2)
//     {
//         if (isPrime[i])
//         {
//             for (int j = i * i; j < N; j += 2 * i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     for (int i = 4; i < N; i += 2)
//     {
//         isPrime[i] = false;
//     }

//     prime.push_back(2);
//     for (int i = 3; i < N; i += 2)
//     {
//         if (isPrime[i])
//             prime.push_back(i);
//     }
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n++;
    vector<bool> isPrime(n + 2, true);
    vector<int> ans(n + 1);
    for (int i = 3; i * i <= n; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 4; i <= n; i += 2)
    {

        isPrime[i] = false;
    }

    if (n > 3)
    {
        cout << 2 << endl;
    }
    else
        cout << 1 << endl;

    for (int i = 2; i <= n; i++)
    {

        if (isPrime[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }

    return 0;
}
