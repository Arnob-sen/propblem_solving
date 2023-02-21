#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
vector<ll> prime;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{

    fastio
        ll t;
    cin >> t;
    p[1] = 1, p[0] = 1;
    // p[2]=1;

    for (ll i = 3; i * i <= MAXN; i += 2)
    {
        if (!p[i])
        {
            for (ll j = i * i; j <= MAXN; j += i + i)
                p[j] = true;
        }
    }
    prime.push_back(2);
    for (ll i = 3; i <= MAXN; i += 2)
    {
        if (p[i] == 0)
            prime.push_back(i);
    }

    while (t--)
    {
        ll n;
        cin >> n;
        cout << prime[n - 1] << endl;
    }
}