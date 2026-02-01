#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int n, t;
    cin >> n;
    t = n;
    vector<int> v(n);
    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        v1[--v[i]] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}