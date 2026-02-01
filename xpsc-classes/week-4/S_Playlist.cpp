#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    int j = 0, ans = INT_MIN, sum = -1, i = 1;
    for (; i <= n; i++)
    {
        int x;
        cin >> x;
        j=max(j,mp[x]+1);
        mp[x]=i;
        ans=max(ans,i-j+1);
    }
    
    

    cout << ans << endl;

    return 0;
}
