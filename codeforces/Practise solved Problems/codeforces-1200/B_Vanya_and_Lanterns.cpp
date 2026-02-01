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
#include <iomanip>
using namespace std;

int main()
{
    long long n, l;
    cin >> n >> l;

    vector<long long> li(n);
    for (long long &x : li)
        cin >> x;
    sort(li.begin(), li.end());
    long long dis = 0, fdsi = 0, ldsi = 0;

    for (int i = 0; i < n - 1; i++)
    {
        dis = max(dis, (li[i + 1] - li[i]));
    }

    if (li[0] != 0)
    {
        fdsi = li[0];
    }
    if (li[n - 1] != n)
    {
        ldsi = l - li[n - 1];
    }

    double redi = (double)dis / 2;
    double fst = (double)fdsi, lst = (double)ldsi;
    if (redi > fst && redi > lst)
        cout << fixed << setprecision(10) << redi << endl;
    else if (fst > redi && fst > lst)
        cout << fixed << setprecision(10) << fst << endl;
    else
        cout << fixed << setprecision(10) << lst << endl;

    return 0;
}
