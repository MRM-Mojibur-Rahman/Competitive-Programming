#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    vector<ll> pre(a.size() + 5, 0);
    int len = a.size();
    for (int i = 1; i < len; i++)
    {
        
        if (a[i] == a[i - 1])
            pre[i+1]++;
        
    }
    for (int i = 1; i < len+5; i++)
    {
        pre[i]+=pre[i-1];
    }
    
    // for(int x: pre) cout<<x<<" ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        cout<<pre[r]-pre[l]<<endl;
    }

    return 0;
}
d