#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long n,m,a;
   cin>>n>>m>>a;
   double nside =(double) n/a;
   double mside =(double) m/a;
   long long ans = ceil(mside)*ceil(nside);
   cout<<ans;

    return 0;
}