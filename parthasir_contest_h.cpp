#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    while (cin >> n >> m && n != 0 && m != 0)
    {

        ll arr[n + 1], arr2[m + 1];
        map<ll, ll> d;
        ll c = 0;
        ll f;
        while (n--)
        {
            cin >> f;
            d[f]++;
        }
        while (m--)
        {
            cin >> f;
            d[f]++;
        }
        for (auto l : d)
            if (l.second == 2)
                c++;

        cout << c << endl;
    }
}