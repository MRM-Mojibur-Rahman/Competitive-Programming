#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        long long n;
        cin >> n;
        long long two = 0, three = 0;

        while (n % 2 == 0)
        {
            two++;
            n /= 2;
        }
        while (n % 3 == 0)
        {
            three++;
            n /= 3;
        }

        if (n != 1 || two > three)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (three - two) + three << endl;
        }
    }

    return 0;
}
