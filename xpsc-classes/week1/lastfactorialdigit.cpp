#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll factorial ( int n)
{
    if(n<=1) return 1;
    return factorial(n-1)*n;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        ll fact = factorial(n);
        cout<<fact%10<<endl;

    }
    return 0;
}
