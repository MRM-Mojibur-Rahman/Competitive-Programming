#include<bits/stdc++.h>
using namespace std;
int main ()
{
    
   int test_case;
   cin>>test_case;
   int ans=0;
   for (int t = 0; t < test_case; t++)
   {
       int num,sum=0;
       for (int i = 0; i < 3; i++)
       {
            cin>>num;
            sum+=num;
       }
       if (sum>=2)
       {
         ans++;
       }
       
   }
   cout<<ans;
    return 0;
}