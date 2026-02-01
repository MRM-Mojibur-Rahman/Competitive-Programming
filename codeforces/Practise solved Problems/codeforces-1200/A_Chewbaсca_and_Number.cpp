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
using ll =long long ;

int main()
{
string num;
cin>>num;
int len = num.size();
for (int i = 0; i < len; i++)
{
    if(!i&& num[i]=='9') continue;
    if(num[i]>52) num[i]=48+57-num[i];
    
    
}
cout<<num<<endl;



return 0;
}
