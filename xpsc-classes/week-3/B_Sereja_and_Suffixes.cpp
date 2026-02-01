#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int>dp(n+1,-1);
    set<int>s;
    for (int i = n-1; i >=0; i--)
    {
        s.insert(nums[i]);
        dp[i]=s.size();
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        x--;

        cout<<dp[x]<<endl;
    }
    
    
   

    return 0;
}
