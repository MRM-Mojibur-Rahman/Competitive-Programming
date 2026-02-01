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
using ll = long long;

int main()
{
    ll n, m, a, b, ans;
    cin >> n >> m >> a >> b;
    double one = (double)a;
    double f = (double)b / m;
    if (f < one)
    {
        ans = (n / m) * b;
       ll rem = n%m;
       if (b<rem*a)
       {
        ans+=b;
       }
       else
       {
        ans+=rem*a;
       }
       
       
    }
    else
    {
        ans = n * a;
    }
    cout << ans << endl;

    return 0;
}
