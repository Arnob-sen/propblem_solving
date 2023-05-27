#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
// #define inf 1e12
int main()
{
    fastio
        ll n,
        k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<pair<ll, char>> v;
    map<char, ll> mp;
    for (ll i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    ll ans = 0;
    ll sum = 0;
    for (auto x : mp)
    {
        v.push_back({x.second, x.first});
        // cout << x.first << " " << x.second << endl;
    }
    sort(v.begin(), v.end());
    for (ll i = v.size() - 1; i >= 0; i--)
    {
        ll z = v[i].first;
        if (sum + z >= k)
        {
            z = k - sum;
        }
        sum += z;

        ans += (z * z);
        if (sum == k)
            break;
    }
    // cout << v[i].first << " " << v[i].second << endl;
    cout << ans << endl;
}