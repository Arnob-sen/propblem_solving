#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()
{
    ll n;
    cin >> n;
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = min(a, b);
    ans = min(ans, c);
    if (ans == a || ans == b || n == 1)
        cout << ans * (n - 1) << endl;
    else
        cout << min(a, b) + c * (n - 2) << endl;
}