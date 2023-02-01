#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
typedef long long ll;

int main()
{

    ll t, mx = 1000000000 + 7;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans, j = 1, c = 1;
        ans = ((((n * (n + 1)) % n1) * (4 * n - 1)) % n1 * 337) % n1;
        cout
            << (ans) << endl;
    }
}
//