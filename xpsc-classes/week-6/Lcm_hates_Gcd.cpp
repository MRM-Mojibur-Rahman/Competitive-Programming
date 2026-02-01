#include <bits/stdc++.h>
using namespace std;
#define ll long long
int LCM(int a , int b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int a , b;cin>>a>>b;
        int gcd = __gcd(a,b);
        cout<<LCM(a,gcd)-__gcd(b,gcd)<<endl;
        
    }
    return 0;
}
