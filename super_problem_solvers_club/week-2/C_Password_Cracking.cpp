#include <bits/stdc++.h>
using namespace std;
#define ll long long
int querie(deque<char> &s)
{
    cout << "? ";
    for (auto it : s)
        cout << it;
    cout << endl;
    int x;
    cin >> x;
    return x;
}
void answer(deque<char> &s)
{
    cout << "! ";
    for (auto it : s)
        cout << it;
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    deque<char> s;
    while (s.size() < n)
    {
        s.push_back('0');
        if (querie(s))
            continue;
        s.back() = '1';
        if (querie(s))
            continue;
        else
        {
            s.pop_back();
            break;
        }
    }
    while (s.size() < n)
    {
        s.push_front('0');
        if (querie(s))
            continue;
        else
            s.front() = '1';
    }
    answer(s);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
