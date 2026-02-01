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
int t ;
cin>>t;
while (t--)
{
    long long n , k;
    cin>>n>>k;
    long long a = k%(n-1);
    if (a==0)
    {
       a=-1;
    }
    
    long long b = k/(n-1);
    long long ans = a+(b*n);
    cout<<ans<<endl;

}

return 0;
}
