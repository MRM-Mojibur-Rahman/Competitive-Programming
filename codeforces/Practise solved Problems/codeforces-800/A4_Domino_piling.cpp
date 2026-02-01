#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int len , wide;
   cin>>len >> wide;
   int area = len*wide;
   float ans =(float) area / 2;
   cout<<floor(ans);
    return 0;
}