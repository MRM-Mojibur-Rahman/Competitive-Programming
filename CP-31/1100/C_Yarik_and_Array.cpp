#include <bits/stdc++.h>
using namespace std;
#define ll long long
// this problem teach me that when i use mod for negative int then mod gives wrong answer
// so for mod in negative always use abs()
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    vector<int>dp(n);
    dp[n-1] = a[n-1];
    for (int i = n-2; i >=0; i--)
    {
        if(abs(a[i])%2!=abs(a[i+1])%2)
        {
            dp[i] = max(dp[i+1]+a[i],a[i]);
           

        }
        else dp[i]=a[i];
        
    
    }
    auto x = max_element(dp.begin(),dp.end());
    cout<<*x<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
