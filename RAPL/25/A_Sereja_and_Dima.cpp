#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int serja = 0, dima = 0;

    for (int i = 0; i < n; i++)
    {
        int lef = *a.begin();
        int right = a.back();

        if (lef > right)
        {

            if (i % 2 == 0)
            {
                serja += lef;
            }
            else
                dima += lef;

            a.pop_front();
        }
        else
        {

            if (i % 2 == 0)
            {
                serja += right;
            }
            else
                dima += right;

            a.pop_back();
        }
    }

    cout << serja << " " << dima << endl;

    return 0;
}
