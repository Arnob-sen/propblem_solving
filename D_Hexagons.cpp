#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, true);
vector<ll> prime;
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
    ll ans = 3 * n * (n + 1);
    cout << ans + 1 << endl;
}
