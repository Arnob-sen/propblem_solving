#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 40000;
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
        ll n;
    vector<bool> prime(MAXN + 1, true);
    vector<ll> v;
    prime[2] = 1;
    for (ll i = 4; i <= MAXN; i += 2)
        prime[i] = false;

    for (ll i = 3; i * i <= MAXN; i += 2)
    {
        if (prime[i])
        {
            prime[i] = true;
            for (ll j = i * i; j <= MAXN; j += i + i)
                prime[j] = false;
        }
    }
    // cout << prime[9] << endl;

    while (cin >> n && n)
    {
        ll ans = 0;

        for (ll i = 2; i <= n; i++)
            if (prime[i] == 1)
                v.push_back(i);

        //   cout << v.size() << endl;
        for (ll i = 0; i < v.size(); i++)
        {
            //   cout << v[i] << " ";
            for (ll j = i; j < v.size(); j++)
                if (v[i] + v[j] == n)
                    ans++;
        }

        cout << ans << endl;
        //<< endl;
        v.clear();
    }
}