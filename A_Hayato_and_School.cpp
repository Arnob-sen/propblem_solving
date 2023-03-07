#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
// vector<ll> dp;
vector<ll> seg;
vector<ll> arr;

#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> odd, even;

        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2)
            {
                odd.push_back(i);
            }
            else
                even.push_back(i);
        }
        if (odd.size() >= 3)
        {
            cout << "YES\n";
            cout << odd[0] << " " << odd[1] << " " << odd[2] << " " << endl;
        }
        else if (odd.size() >= 1 && even.size() >= 2)
        {
            cout << "YES\n";
            cout << odd[0] << " " << even[0] << " " << even[1] << endl;
        }
        else
            cout << "NO\n";
    }
}