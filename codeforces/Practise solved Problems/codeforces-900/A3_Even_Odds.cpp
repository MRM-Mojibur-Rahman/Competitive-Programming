#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, posi;
    cin >> n >> posi;
    long long odd;
    odd = (n % 2 == 0) ? (n / 2) : (n / 2) + 1;

    if (posi <= odd)
        cout << 1 + 2 * (posi - 1);

    else
        posi -= odd;
    cout << 2 + 2 * (posi - 1);

    return 0;
}