#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
int t ; cin>>t;
while (t--)
{
   int a , b , c;
   cin>>a>>b>>c;
   int cavg = (a+b+c)/3;
   if (cavg*3 ==(a+b+c)&&c>a&&c>b)
   {
        cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
   
}


return 0;
}
