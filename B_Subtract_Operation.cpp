#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        set<ll> s;
        ll arr[n + 1];
        ll c = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr[i] = x;

            s.insert(x);
        }
        for (ll i = 0; i < n; i++)
        {
            if (s.count(arr[i] + k))
            {
                cout << "YES\n";
                c = 1;
                break;
            }
        }
        if (c == 0)
            cout << "NO\n";
    }
}