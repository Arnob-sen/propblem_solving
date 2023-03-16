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
int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; ++i)
        {
            cin >> arr[i];
            arr[i]++;
        }

        for (ll i = 0; i < n - 1; i++)
        {

            if (arr[i + 1] % arr[i] == 0)
                arr[i + 1]++;
        }
        for (ll i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
}