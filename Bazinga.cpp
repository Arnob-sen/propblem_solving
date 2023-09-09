#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 2e7;
vector<bool> p(MAXN + 1, true);
vector<ll> prime;
vector<ll> series;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{
    fastio;
    p[1] = 0, p[0] = 0;
    for (ll i = 3; i * i <= MAXN; i += 2)
    {
        if (p[i])
        {
            for (ll j = i * i; j <= MAXN; j += i + i)
                p[j] = 0;
        }
    }
    prime.push_back(2);
    for (ll i = 3; i <= MAXN; i += 2)
    {
        if (p[i])
            prime.push_back(i);
    }
    for (int i = 0; i < prime.size(); i++)
    {
        for (int j = i + 1; j < prime.size() && prime[i] * prime[j] <= MAXN; j++)
        {
            ll ok = prime[i] * 1LL * prime[j];
            series.push_back(ok);
        }
    }
    sort(series.begin(), series.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << series[n - 1] << endl;
        // for (auto x : series)
        //     cout << x << " ";
    }
}