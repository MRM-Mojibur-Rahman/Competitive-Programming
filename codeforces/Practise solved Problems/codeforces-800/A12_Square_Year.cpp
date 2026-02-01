#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test_case;
   cin>>test_case;
   for (int t = 0; t < test_case; t++)
   {
       int year;
       cin>>year;
       int sqryear = sqrt(year);
       if (sqryear*sqryear==year)
       {
           if (sqryear!=0)
           {
            cout<<1<<" "<<sqryear-1<<endl;
           }
           else
           {
             cout<<0<<" "<<sqryear<<endl;
           }
           
           
            
       }
       else
       {
        cout<<"-1"<<endl;
       }
       
       
       
   }
    return 0;
}