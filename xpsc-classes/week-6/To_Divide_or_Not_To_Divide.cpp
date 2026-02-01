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
        ll a,b,n;
        cin>>a>>b>>n;
        ll st = n/a;
        if(st*a<n) st++;
        if(a%b==0) cout<<-1<<endl;
        else
        {
            while ( st*a%b==0 )
            {
                st++;
            }
            cout<<st*a<<endl;

            
        }
        
    }
    return 0;
}
