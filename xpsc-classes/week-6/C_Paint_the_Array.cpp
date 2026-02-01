#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a , ll b)
{
    return __gcd(a, b); // time complexitiy O(log(min(a,b)))
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        ll n ;cin>>n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<ll>red,blue;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0) red.push_back(v[i]);
            else blue.push_back(v[i]);
        }
        
        ll rsi = red.size(),bsi= blue.size();        
        ll rgcd = red[0],bgcd=blue[0];
        for (int i = 1; i < rsi; i++)
        {
            rgcd= GCD(rgcd,red[i]);
            if(rgcd==1) break;
        }
        for (int i = 1; i < bsi; i++)
        {
            bgcd= GCD(bgcd,blue[i]);
            if(bgcd==1) break;
        }
        bool isb = true,isr = true;
       
            for (int i = 0; i < rsi; i++)
            {
                if(red[i]%bgcd==0) {
                    isb =false;
                    break;
                }
            }
        
             for (int i = 0; i < bsi; i++)
            {
                if(blue[i]%rgcd==0) {
                    isr =false;
                    break;
                }
            }
       
           
        
        if(isr) cout<<rgcd<<endl;
        else if ( isb) cout<<bgcd<<endl;
        else cout<<0<<endl;
        // cout<<bgcd<<" "<<rgcd<<endl;
        
        
    }
    return 0;
}
