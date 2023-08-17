
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;

        ll a, b;
        cin >> a >> b;
        if (a > 1)
            cout << a - 1 << endl;
        else
            cout << b + 1 << endl;
    }
}