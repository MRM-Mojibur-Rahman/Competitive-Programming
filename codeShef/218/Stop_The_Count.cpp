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
        int n; cin>>n;
        string s ; 
        cin>>s;
        int ans = 0 ;
        int one = 0 , zero = 0 ;
        
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1') one ++ ;
            else zero ++ ;
            if(one > zero )
            {
                ans ++;
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
