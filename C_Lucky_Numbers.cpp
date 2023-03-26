#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{
    fastio
        ll n;
    cin >> n;
    ll ans = pow(2, n + 1);
    cout << ans - 2 << endl;
}