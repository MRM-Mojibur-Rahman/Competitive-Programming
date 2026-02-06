#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> div;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << "PERFECT NUMBER\n";
    }
    else
        cout << "NOT A PERFECT NUMBER\n";
    cout << sum << endl;
    return 0;
}
