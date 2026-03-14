#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    while (q--)
    {
        int ty;
        cin >> ty;
        bool all = false;
        int last = 0;
        if (ty == 1)
        {
            int idx, val;
            cin >> idx >> val;
            if(a[idx]>=val)
            {
                sum-=abs(a[idx]-val);
                a[idx] = val;
            }
            else 
            {
                sum+=abs(a[idx]-val);
                a[idx]=val;

            }
            cout<<sum<<endl;

        }
        else{
            
        }
    }

    return 0;
}
