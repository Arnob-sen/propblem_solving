#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
#define endl '\n'
vector<bool> p(MAXN, true);
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
    vector<ll> v;
    for (ll i = 2; i * i <= MAXN; i++)
    {
        if (p[i])
            for (ll j = i * i; j <= MAXN; j += i)
            {
                p[j] = false;
            }
    }
    ll c = 0;
    for (ll i = 2; i <= MAXN; i++)
        if (p[i])
            v.push_back(i);
    ll n;
    while (cin >> n && n)
    {
        c = 0;
        for (ll i = 0; i < v.size(); i++)
            if (n % v[i] == 0)
                c++;

        cout << n << " : " << c << endl;
    }
}