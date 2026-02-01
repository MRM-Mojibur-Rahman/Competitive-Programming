#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        vector<int> prime = {2, 3, 5, 7, 11, 13, 17,
                             19, 23, 29, 31, 37, 41, 43, 47, 53,
                             59, 61, 67, 71, 73, 79, 83, 89, 97,
                             101, 103, 107, 109, 113, 127, 131,
                             137, 139, 149, 151, 157, 163, 167, 173,
                             179, 181, 191, 193, 197, 199, 211, 223,
                             227, 229, 233, 239, 241, 251, 257, 263,
                             269, 271, 277, 281, 283, 293, 307, 311,
                             313, 317, 331, 337, 347, 349, 353, 359,
                             367, 373, 379, 383, 389, 397, 401, 409,
                             419, 421, 431, 433, 439, 443, 449, 457,
                             461, 463, 467, 479, 487, 491, 499, 503,
                             509, 521, 523, 541, 547};

        for (int i = 0; i <=100; i++)
        {
            
            if (prime[i] > v[0])
               { cout << v[0] + 1 << endl;
                break;}
            else if (gcd(prime[i], v[0]) == 1)
            {
                cout << prime[i] << endl;
                break;
            }
        }
    }

    return 0;
}
