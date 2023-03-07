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
    ll n;
    vector<ll> v;

    while (cin >> n)
    {
        v.push_back(n);
        sort(v.begin(), v.end());
        // for (ll i = 0; i < v.size(); i++)
        //   cout << v[i] << " ";

        // cout << endl;

        ll l = v.size();

        if (l % 2 == 1)
            cout << v[l / 2] << endl;

        else
        {
            cout << (v[(l / 2) - 1] + v[l / 2]) / 2 << endl;
        }
    }
}