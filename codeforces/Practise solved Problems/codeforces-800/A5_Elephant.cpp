#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int moves;
   cin>>moves;
   int rem = moves%5;
  
   int ans = moves/5;

   if (rem<=4&&rem!=0)
   {
    ans++;
   }
   

   cout<<ans;
   
   
    return 0;
}