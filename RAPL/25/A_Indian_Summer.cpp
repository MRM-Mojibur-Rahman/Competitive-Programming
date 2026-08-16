#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a = {1, 2, 3, 4, 5};

    sort(a.begin(), a.end());/// assending order , o(nlogn)
    sort(a.rbegin(), a.rend());/// desending order , o(nlogn)

  int x =   count(a.begin(),a.end(),1);

    reverse(a.begin(),a.end());// 1 2 3 => 3 2 1 o(n)

    // a.pop_back();
    // a.pop_front();

    // a.push_front(1);
    // a.push_back(2);

    return 0;
}
