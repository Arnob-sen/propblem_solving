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
        seg[node] = b;

        return;
    }
    int mid = (b + e) / 2;
    make(2 * node, b, mid);
    make(2 * node + 1, mid + 1, e);
    if (arr[seg[node * 2]] <= arr[seg[node * 2 + 1]])
    {
        seg[node] = seg[node * 2];
        cout << arr[seg[node * 2]] << endl;
    }
    else
    {
        seg[node] = seg[2 * node + 1];
        cout << arr[seg[node * 2 + 1]] << endl;
    }
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
        for (ll i = 1; i < 4 * n && seg[i] != 0; i++)
            cout << seg[i] << " ";

        cout << endl;
    }
}