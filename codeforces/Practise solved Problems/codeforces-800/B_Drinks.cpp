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
double n;
cin>>n;
double sum=0;
for (int i = 0; i < n; i++)
{
    double x;
cin>>x;
sum+=x;}
double ans = (double) sum/n;
cout<<ans<<endl;



return 0;
}
