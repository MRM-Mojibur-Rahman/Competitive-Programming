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
    string ac;
    cin >> ac;
    if (ac[0] == '-')
    {
        int len = ac.size();
        if (ac[len - 1] < ac[len - 2])
        {
            ac.erase(len - 2, 1);
        }
        else
            ac.erase(len - 1, 1);
        if (ac[1] =='0')
        {
            cout << 0;
            return 0;
        }

        cout << ac;
    }
    else
        cout << ac;

    return 0;
}
