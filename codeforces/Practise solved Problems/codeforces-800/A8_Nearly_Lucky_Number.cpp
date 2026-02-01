#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long n;
   cin>>n;
   long long dev = n;
   int count =0;
   while (dev>0)
   {
        int rem = dev%10;
        // cout<<rem<<endl;
        if (rem==4||rem==7)
        {
            count++;
        }
        dev/=10;
   }
   if (count==4||count==7)
   {
    cout<<"YES";
   }
   else
   {
    cout<<"NO";
   }
   
   
   
    return 0;
}