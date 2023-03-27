#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, true);
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
    ll c = 0;
    while (t--)
    {
        ll n;

        cin >> n;
        ll arr[n + 2], arr2[n + 1];
        ll x = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll m;
            cin >> arr[i];
            arr2[arr[i]] = i;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                x++;
                ll d = arr[i];
                swap(arr[i], arr[arr2[i]]);
                arr2[d] = arr2[i];
            }
        }
        cout << "Case " << ++c << ": " << x << endl;
    }
}