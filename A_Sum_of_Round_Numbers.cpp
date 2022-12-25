#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll d;
        cin >> d;
        ll p = 1;
        vector<ll> v;
        while (d > 0)
        {
            if (d % 10 > 0)
                v.push_back((d % 10) * p);
            // cout << (d % 10) * p << " ";

            d /= 10;
            p *= 10;
            // cout << d << " " << p << " " << endl;
        }
        cout << v.size() << endl;
        for (ll i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}