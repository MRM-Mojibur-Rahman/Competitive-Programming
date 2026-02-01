#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int num,k;
   cin>>num>>k;
   int div=num ,rem;
   while (k--)
   {
        rem=div%10;
        if (rem==0)
        {
            div/=10;
        }
        else
        {
            div--;
        }
        
        
   }
   cout<<div;
   
    return 0;
}