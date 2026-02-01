#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    long long sum = 0, pr = 0;
    map<long long, int> pre;
    pre[0] = 0;
    int r = 0, l = 0;
    // cout<<k<<endl;
    while (r < n)
    {
        sum += arr[r];
        pr += arr[r];
        cout<<pr<<" ";
        pre[pr] = r;
        if (sum == k)
            ans = max(ans, r - l + 1);

        if (pre.find(pr - k) != pre.end())
        {
            
            ans = max(ans, r - pre[pr - k] + 1);
        }
        while (sum > k)
        {
            sum -= arr[l];
            l++;
        }
        r++;
    }
    // for (auto [a,b]:pre)
    // {
    //     cout<<a<<" "<<b<<endl;
    // }
    
    // cout << ans << endl;
    return 0;
}
