#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n,m;
   cin>>n>>m;
   vector<int>v(m);
    for(int &x:v) cin>>x;
    sort(v.begin(),v.end());
    int ans=INT_MAX;
    for (int i = 0; i < m-n+1; i++)
    {
        if ((v[i+n-1]-v[i])<ans)
        {
            ans=v[i+n-1]-v[i];
        }
        
    }
    cout<<ans;
    return 0;
}