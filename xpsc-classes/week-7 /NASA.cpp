#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxNum ((1 << 15) - 1)
bool isPalindrom(int n)
{
    string s = to_string(n);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            return false;
    }
    return true;
}
vector<int> palindroms;
void all_palindrom()
{
    for (int i = 0; i <= maxNum; i++)
    {
        if (isPalindrom(i))
            palindroms.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    all_palindrom();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), nums(maxNum + 10, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            nums[v[i]]++;
        }
        ll ans = n;
        int len = palindroms.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < len; j++)
            {
                ans += nums[(v[i] ^ palindroms[j])];
            }
        }
        // cout<<len;
        cout << ans / 2 << endl;
    }
    return 0;
}
