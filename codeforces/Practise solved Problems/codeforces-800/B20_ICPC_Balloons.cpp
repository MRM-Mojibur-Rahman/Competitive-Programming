#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test_case;
   cin>>test_case;
   for (int t = 0; t < test_case; t++)
   {
       int n;
       cin>>n;
       string pro;
       cin>>pro;
       int ar[26]={0};
       int total= n;
       for (int i = 0; i < n; i++)
       {
          ar[pro[i]-65]++;
       }
       for (int i = 0; i < 26; i++)
       {
        if (ar[i]>0)
        {
            total++;
        }
        
       }
       cout<<total<<endl;
       
       
   }
    return 0;
}