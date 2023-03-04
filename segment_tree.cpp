#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
// vector<ll> dp;
ll seg[MAXN];
ll arr[MAXN];
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
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}
int main()
{
    ll n;
    cin >> n;
    //   ll arr[4*n];

    for (ll i = 1; i <= n; i++)
        cin >> arr[i];

    make(1, 1, n);
    for (ll i = 1; i < 4 * n && seg[i] != 0; i++)
        cout << seg[i] << " ";
}