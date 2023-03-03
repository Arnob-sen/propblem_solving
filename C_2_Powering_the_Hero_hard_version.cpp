#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
// vector<ll> dp;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
ll ans1 = 0, ans2 = 0;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0, x, ans = 0, c = 0;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        priority_queue<ll> pq;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                pq.push(arr[i]);
            else if (arr[i] == 0 && i != 0 && !pq.empty())
            {
                x = pq.top();
                ans += x;
                pq.pop();
            }
        }
        cout << ans << endl;
    }
}