#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
#define inf 1e12
int main()
{
    fastio;
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    arr[n] = 10;
    vector<ll> v;
    ll ans1 = 0, ans2 = 0, c1 = 1, c2 = 1;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
            c1++;

        else
        {
            v.push_back(c1);
            c1 = 1;
        }
    }
    for (ll i = 1; i < v.size(); i++)
        ans1 = max(ans1, min(v[i], v[i - 1]));

    cout << ans1 * 2 << endl;
}