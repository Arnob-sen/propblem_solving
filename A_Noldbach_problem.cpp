#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 100005;
vector<bool> p(MAXN, true);
vector<ll> prime;
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

    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 0; prime[i] <= n; i++)
    {
        if (p[prime[i] + prime[i + 1] + 1] && prime[i] + prime[i + 1] + 1 <= n)
            ans++;
    }
    if (ans >= k)
        cout << "YES\n";
    else
        cout << "NO\n";
}