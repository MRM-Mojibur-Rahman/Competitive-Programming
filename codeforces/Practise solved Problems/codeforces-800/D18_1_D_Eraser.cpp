#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test_case;
   cin>>test_case;
   for (int t = 0; t < test_case; t++)
   {
       int n,k;
       cin>>n>>k;
       string paper;
       cin>>paper;
       int ans=0;
       for (int i = 0; i < paper.size(); i++)
       {
           if (paper[i]=='B')
           {
            ans++;
            i+=k-1;
           }
           
       }
       cout<<ans<<endl;
       
       
   }
    return 0;
}