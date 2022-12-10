
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = (8 * pow(9, n - 1));
        if (ans <= 1000000007)
            cout << ans << endl;
        else
            cout << ans % 1000000007 << endl;
        ans = 0;
    }
}