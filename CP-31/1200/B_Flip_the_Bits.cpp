#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + (a[i - 1] - '0');
    }
    int flp = 0;
    // for(auto it:pre) cout<<it<<" ";
    for (int i = n; i > 0; i--)
    {
        int j = i - 1;
        if (a[j] != b[j] && flp == 1)
        {
        }
        else if (a[j] == b[j ]&& flp == 0)
        {

        }
        else
        {
            if(pre[i]==i-pre[i])
            {
                flp=!flp;
            }
            else 
            {
               
                // cout<< pre[i]<<endl;
                cout<<"NO\n";
                return ;
            }
        }
    }
    cout<<"YES\n";
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
