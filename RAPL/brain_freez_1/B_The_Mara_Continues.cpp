#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n ;cin>>n;
        vector<int>v(n),order(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        order=v;
        bool is = true;
        sort(order.begin(),order.end());
        for (int i = 0; i < n; i++)
        {
            if((v[i]%2==0 && order[i]%2==0)||(v[i]%2==1 && order[i]%2==1)) is = true;
            else 
            {
                is = false;
                break;
            }
            
        }
        if(is) cout<<"YES\n";
        else cout<<"NO\n";

        
    }
    return 0;
}
