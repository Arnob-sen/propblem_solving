#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100005;
vector<bool> p(MAXN, false);
// vector<ll> dp;
vector<ll> seg;
vector<ll> arr, ans(MAXN);
ll num;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
void make(ll node, ll b, ll e)
{
    if (b == e)
    {
        seg[node] = 1;
        return;
    }
    int mid = (b + e) / 2;
    make(2 * node, b, mid);
    make(2 * node + 1, mid + 1, e);

    seg[node] = (seg[2 * node] + seg[2 * node + 1]);
}
void update(ll node, ll b, ll e, ll pos)
{
    if (b == e && pos == 1 && seg[node] == 1)
    {
        seg[node] = 0;
        ans[num] = b;
        return;
    }
    ll mid = (b + e) / 2;
    if (seg[2 * node + 1] >= pos)
        update(2 * node + 1, mid + 1, e, pos);
    else
        update(2 * node, b, mid, pos - seg[2 * node + 1]);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}
int main()
{
    fastio
        ll t,
        i = 0;
    cin >> t;
    while (t--)
    {
        ll n;

        //  cout << "\n";
        cin >> n;
        //   ll arr[4*n];
        arr.assign(n + 2, 0);
        seg.assign(4 * n + 2, 0);
        // vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i]++;
        }

        make(1, 1, n);

        for (ll i = n - 1; i >= 0; i--)
        {
            num = i + 1;
            update(1, 1, n, arr[i]);
        }
        cout << "Case " << ++i << ": ";

        cout << ans[1] << endl;

        // for (ll i = 1; i <= 4 * n && seg[i]; i++)
        //     cout << seg[i] << " ";

        // cout << endl;
    }
}