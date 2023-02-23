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
        ll t,
        c = 0;
    cin >> t;
    ll arr[32];
    for (ll i = 1; i < 32; i++)
        arr[i] = pow(2, i + 1) - 1;
    while (t--)
    {
        c = 0;
        ll n;
        cin >> n;
        for (ll i = 1; i < 32; i++)
            if (n % arr[i] == 0)
            {
                cout << n / arr[i] << endl;
                c = 1;
                break;
            }
    }
}