#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

// #define inf 1e12
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        vector<ll> v;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        if (arr[n - 1] == 1)
            cout << "NO\n";

        else
        {
            v.clear();
            cout << "YES\n";
            ll c = 0;
            for (ll i = n - 2; i >= 0; i--)
            {
                if (arr[i] == 1)
                {
                    c++;
                    v.push_back(0);
                }
                else
                {
                    v.push_back(c);
                    c = 0;
                }
            }
            v.push_back(c);
            for (auto x : v)
                cout << x << " ";

            cout << endl;
        }
    }
}