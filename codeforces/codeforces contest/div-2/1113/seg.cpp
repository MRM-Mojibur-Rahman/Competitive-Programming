#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SegTree
{
    ll n;
    vector<ll> tree;

    SegTree(ll sz)
    {
        n = sz;
        tree.assign(4 * max(1LL, n), LLONG_MIN);
    }

    void build(ll node, ll l, ll r, const vector<ll> &a)
    {
        if (l == r)
        {
            tree[node] = a[l];
            return;
        }

        ll mid = l + (r - l) / 2;

        build(node * 2, l, mid, a);
        build(node * 2 + 1, mid + 1, r, a);

        tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
    }

    void build(const vector<ll> &a)
    {
        if (n == 0) return;
        build(1, 0, n - 1, a);
    }

    ll query(ll node, ll l, ll r, ll ql, ll qr)
    {
        if (qr < l || r < ql)
            return LLONG_MIN;

        if (ql <= l && r <= qr)
            return tree[node];

        ll mid = l + (r - l) / 2;

        return max(
            query(node * 2, l, mid, ql, qr),
            query(node * 2 + 1, mid + 1, r, ql, qr)
        );
    }

    ll query(ll l, ll r)
    {
        if (n == 0 || l > r)
            return LLONG_MIN;

        l = max(0LL, l);
        r = min(r, n - 1);

        return query(1, 0, n - 1, l, r);
    }
};

int main(){

vector<ll> a = {1, 5, 2, 7, 3};

SegTree st(a.size());

st.build(a);

cout << st.query(1, 3) << '\n';   // 7
cout << st.query(2, 4) << '\n';   // 7
}