#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x, y;
    cin >> x >> y;
    ll ans1 = abs(a - c);
    ll ans2 = abs(b - d);
    if (ans1 % x == 0 && ans2 % y == 0 && ((ans1 / x) % 2 == (ans2 / y) % 2))
        cout << "YES\n";
    else
        cout << "NO\n";
}