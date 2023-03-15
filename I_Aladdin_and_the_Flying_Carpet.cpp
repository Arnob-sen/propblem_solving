
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MAXN = 1e7 + 5;
#define endl '\n'
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
    //  v.push_back(2);
    for (ll i = 4; i <= MAXN; i += 2)
        prime[i] = false;

    for (ll i = 3; i * i <= MAXN; i += 2)
    {
        if (prime[i])
        {
            // v.push_back(i);
            prime[i] = true;
            for (ll j = i * i; j <= MAXN; j += i + i)
                prime[j] = false;
        }
    }
    for (ll i = 2; i <= MAXN; i++)
        if (prime[i])
            v.push_back(i);

    // cout << v.size() << endl;
    ll t;
    cin >> t;
    ll c = 0;
    while (t--)
    {
        ll n, a, b;
        ll ans = 1;
        cin >> n >> b;
        a = n;
        ll d = sqrt(n);

        cout << "Case " << ++c << ": ";
        if (b * b >= n)
        {
            cout << "0\n";
            continue;
        }

        for (ll i : v)
        {
            if (i * i > n)
                break;
            if (n % i == 0)
            {
                ll cnt = 1;
                while (n % i == 0)
                {
                    cnt++;
                    n /= i;
                }
                ans *= cnt;
            }
        }
        if (n > 1)
            ans *= 2;

        ans = ans / 2;

        for (ll i = 1; i < b; i++)
        {
            if (a % i == 0)
                ans--;
        }

        cout << ans << endl;
    }
}
