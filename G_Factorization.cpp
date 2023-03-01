// Add some code
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
        ll t,
        c = 0;
    cin >> t;
    while (t--)
    {
        ll N, cnt = 0;
        cin >> N;
        map<ll, ll> mp;
        cout << "Case " << ++c << ": " << N << " = ";
        for (ll i = 2; i <= N; i++)

        {
            ll x = i;
            for (ll j = 2; j * j <= x; j++)
            {
                if (x % j == 0)
                {
                    ll cnt = 0;
                    while (x % j == 0)
                    {
                        cnt++;
                        mp[j]++;
                        x /= j;
                    }
                    //  mp[j] = cnt;
                }
            }
            if (x > 1)
                mp[x]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it != mp.begin())
                cout << " * ";
            cout << it->first << " (" << it->second << ")";
        }

        cout << endl;
    }
}