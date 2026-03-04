#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<bool>> vis(1005, vector<bool>(1005, false));
int dig1, dig2;
int n;

int qi, qj;
void dfs(int i, int j)
{
    if (dig1 == i - j + n || dig2 == i + j || i == qi || j == qj || i > n || i < 1 || j > n || j < 1)
        return;
    if (vis[i][j])
        return;

    vis[i][j] = true;

    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j+1);
    dfs(i-1,j+1);
    dfs(i+1,j-1);
    dfs(i-1,j-1);

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    cin >> qi >> qj;
    dig1 = qi - qj + n;
    dig2 = qi + qj;

    int ki, kj;
    cin >> ki >> kj;
    int di, dj;
    cin >> di >> dj;

    dfs(ki, kj);
    if (vis[di][dj])
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
