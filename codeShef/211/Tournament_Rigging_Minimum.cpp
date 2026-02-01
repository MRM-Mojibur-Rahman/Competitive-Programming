#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n,w;
        cin>>n>>w;
        int magic = pow(2,n+1);
        vector<int>ans(magic-1,-1);
        ans[0]=w;
        ans[1]=w;
        

    }
    return 0;
}
