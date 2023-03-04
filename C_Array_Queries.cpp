#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
// vector<ll> dp;
vector<ll> seg;
vector<ll> arr;

#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
void make(ll node, ll b, ll e)
{
    if (b == e)
    {
        seg[node] = arr[b];
        return;
    }
    int mid = (b + e) / 2;
    make(2 * node, b, mid);
    make(2 * node + 1, mid + 1, e);

    seg[node] = min(seg[2 * node], seg[2 * node + 1]);
}
ll query(ll node, ll b, ll e, ll l, ll r)
{
    if (r < b || l > e)
        return INT_MAX;
    if (b >= l && e <= r)
        return seg[node];
    ll mid = (b + e) / 2;
    ll left = query(2 * node, b, mid, l, r);
    ll right = query(2 * node + 1, mid + 1, e, l, r);
    return min(left, right);
}
int main()
{
    fastio
        ll t,
        i = 0;
    cin >> t;
    while (t--)
    {
        ll n, m;

        //  cout << "\n";
        cin >> n >> m;
        //   ll arr[4*n];
        arr.assign(n + 2, 0);
        seg.assign(4 * n + 2, 0);

        for (ll i = 1; i <= n; i++)
            cin >> arr[i];

        make(1, 1, n);
        cout << "Case " << ++i << ":\n";
        while (m--)
        {
            ll a, b;
            cin >> a >> b;
            cout << query(1, 1, n, a, b) << endl;
        }
        //  for (ll i = 1; i < 4 * n && seg[i] != 0; i++)
        // cout << seg[i] << " ";
    }
}