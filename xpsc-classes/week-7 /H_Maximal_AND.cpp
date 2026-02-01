// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int check_kth_Bit_on_or_off(int n , int k)
// {
//     return ((n>>k)&1);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t ;
//     cin>>t;
//     while (t--)
//     {
//         int n , k;cin>>n>>k;
//         vector<ll>v(n),bits(31,0);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < 31; j++)
//             {
//                 bits[j]+=check_kth_Bit_on_or_off(v[i],j);
//             }
//         }
//         ll ans = 0 ;
//         for (int i = 30; i >=0; i--)
//         {   
//             if((bits[i]+k)>=n )
//             {
                
//                 ans = (ans|(1LL<<i));
//                 k-=(n-bits[i]);
//             }
            
//         }
//         // cout<<(1<<30)<<endl;
//         cout<<ans<<endl;
        

//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<ll> bits(31, 0);
        for (ll x : v) {
            for (int j = 0; j < 31; j++) {
                if (x & (1LL << j))
                    bits[j]++;
            }
        }

        ll ans = 0;

        
        for (int i = 30; i >= 0; i--) {
            ll need = n - bits[i];  
            if (need <= k) {
                k -= need;
                ans |= (1LL << i);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

