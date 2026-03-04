#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < k; i++)
    {
        string x;
        cin >> x;
        for (int j = 0; j < n; j++)
        {
            a[j] |= (1 << (x[j] - 'a'));
        }
    }
    set<int> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.insert(n / i);
            div.insert(i);
        }
    }

    for (int d : div)
    {
        string ans ;
        bool exist = true;
       
        for (int i = 0; i < d; i++)
        {
             int alphabet = (1<<26)-1;
            for (int j = i; j < n; j+=d) alphabet&=a[j];
            if(!alphabet) {exist = false; break;}
            ans+=(char)('a'+ __builtin_ctz(alphabet));
        }
        if(exist)
        {
            for(int i=0;i<n/d;i++)
            {
                cout<<ans;
            }
            cout<<endl;
            return;
        }
        
    }
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
