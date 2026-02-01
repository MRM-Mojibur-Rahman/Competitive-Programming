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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    vector<long long > prefixsum(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            prefixsum[i] = v[i];
        }
        else
            prefixsum[i] = v[i] +prefixsum[i-1];
    }
   
    
    int ans = 0;
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        if (prefixsum[i] >= x )
        {

            if (prefixsum[i] == x)
            {
                
                ans++;
            }
            else
            {
               for (int j = 0; j < i; j++)
               {
                    if (x==(prefixsum[i]-prefixsum[j]))
                    {
                        ans++;
                    }
                    
               }
               
            }
        }
    }

    cout << ans << endl;

    return 0;
}
