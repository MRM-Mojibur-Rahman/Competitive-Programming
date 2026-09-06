#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n)
{

    map<ll, ll> factorization;
    

    for (ll i = 2; i*i <= n; i++)
    {
        while (n%i==0)
        {

            factorization[i]++;
            n/=i;
        }
        
    }
    if(n>1) factorization[n]++;

    for (auto [x, y] : factorization)
    {
        cout << x << "^" << y << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    while (cin >> t)
    {
        if (t != 0)
            solve(t);
        else
            break;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const ll mxn = 1e7;
// vector<bool> isPrime(mxn + 1, true);
// vector<ll> primes;
// void sieve() // Nlog(logN)
// {
//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 4; i <= mxn; i += 2)
//     {
//         isPrime[i] = false;
//     }
//     for (ll i = 3; 1LL * i * i <= mxn; i += 2)
//     {
//         if (isPrime[i])
//         {
//             for (ll j = i * i; j <= mxn; j += 2 * i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (ll i = 0; i <= mxn; i++)
//     {
//         if (isPrime[i])
//            { primes.push_back(i);}
//     }
// }
// void solve(ll n)
// {

//     map<ll, ll> factorization;
//     for (auto it : primes)
//     {
        
//         while (n % it == 0)
//         {
//             factorization[it]++;
//             n /= it;
//         }
       
//     }
//     if(n>1)
//     factorization[n]++;

//     for (auto [x, y] : factorization)
//     {
//         cout << x << "^" << y << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     sieve();
//     while (cin >> t)
//     {
//         if (t != 0)
//             solve(t);
//         else
//             break;
//     }
//     return 0;
// }
