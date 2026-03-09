#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
const int mxn = 5e4 + 2;

// vector<int> palindromes;
// vector<int> dp(mxn, -1);

// void palindrome(int n)
// {
//     int x = n;
//     vector<int> tem, dig;
//     while (n != 0)
//     {
//         tem.push_back(n % 10);
//         n /= 10;
//     }
//     dig = tem;
//     reverse(tem.begin(), tem.end());
//     if (tem == dig)
//         palindromes.push_back(x);
// }
// ll ans(int i)
// {
//     if (i == 0)
//         return 1;

//     if (dp[i] != -1)
//         return dp[i];
//     ll it = 0;
//     int len = palindromes.size();
//     for (int j = 0; j < len; j++)
//     {
//         if(palindromes[j]>i) break;
//         it += (i - palindromes[j] >= 0) ? ans(i - palindromes[j]) : 0;
//     }
//     return dp[i] = it % mod;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     cout<<ans(n)<<endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     for (int i = 1; i < mxn; i++)
//     {
//         palindrome(i);
//     }

//     while (t--)
//     {
//         // for(int i = 0 ; i< mxn; i++) dp[i]=-1;
//         solve();
//     }
//     return 0;
// }
vector<int> pal;

bool isPal(int x)
{
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1;i<mxn;i++)
        if(isPal(i)) pal.push_back(i);

    vector<ll> dp(mxn);
    dp[0] = 1;

    for(auto p:pal)
        for(int i=p;i<mxn;i++)
            dp[i] = (dp[i] + dp[i-p]) % mod;

    int t; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<"\n";
    }
}