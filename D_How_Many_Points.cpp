#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()

{

    ll t, c = 0;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll ans = __gcd(abs(x1 - x2), abs(y1 - y2));
        cout << "Case " << ++c << ": ";
        cout << ans + 1 << endl;
    }
}