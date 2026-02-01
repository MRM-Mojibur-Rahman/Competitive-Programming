/*----------The 1st part code is done by Chatgpt--------*/
// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// // Compute gcd of two numbers
// ll gcd_ll(ll a, ll b)
// {
//     while (b != 0)
//     {
//         ll t = a % b;
//         a = b;
//         b = t;
//     }
//     return a;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         ll m = *min_element(a.begin(), a.end());
//         vector<ll> divs;
//         int count_m = 0;
//         for (ll x : a)
//         {
//             if (x % m == 0)
//             {
//                 divs.push_back(x);
//                 if (x == m)
//                     count_m++;
//             }
//         }
//         if ((int)divs.size() < 2)
//         {
//             cout << "No\n";
//             continue;
//         }
//         if (count_m >= 2)
//         {
//             cout << "Yes\n";
//             continue;
//         }
//         ll g_rest = 0;
//         for (ll x : divs)
//         {
//             if (x != m)
//             {
//                 g_rest = gcd_ll(g_rest, x);
//             }
//         }

//         if (g_rest == m)
//         {
//             cout << "Yes\n";
//         }
//         else
//         {
//             cout << "No\n";
//         }
//     }
//     return 0;
// }
/*---This part code done by me------- */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a , ll b)
{
    while (b!=0)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mn = *min_element(a.begin(), a.end());
        vector<ll>divs;
        int divC=0,mnC=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%mn==0)
            {
                divC++;
                divs.push_back(a[i]);
                if(a[i]==mn)
                    mnC++;
                
            }
        }
        if(divC<2) {
            cout<<"No\n";
            continue;
        }
        else if ( mnC >=2)
        {
             cout<<"Yes\n";
            continue;
        }
        ll gcd = 0;
        for (ll x : divs)
        {
            if(x!=mn)
            {
                gcd=GCD(x,gcd);
            }
        }
        if(gcd!=mn) cout<<"No\n";
        else cout<<"Yes\n";
        
        
        
    }
    return 0;
}
