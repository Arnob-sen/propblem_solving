#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define vc vector
vector<ll> parent;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const ll inf = 1e18;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;

int vis[100005], dis[100005];
vii adj[100005];

void solve()
{
    ll sum = 0, rec = 0, ans = 1;
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        sum = sum - arr[i];
        rec = arr[i] + rec;
        ans = max(ans, __gcd(sum, rec));
    }
    cout << ans << endl;
}
signed main()
{
    IOS;

    // int t = 1;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        // cout<<'\n';
    }
}