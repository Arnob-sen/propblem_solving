#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
vector<ll> prime;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int main()
{
    fastio
        ll t,
        c = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 2 || n / 2 % 2)
            cout << "NO\n";
        else
        {
            ll sum = 0, sum2 = 0;
            cout << "YES\n";
            for (ll i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                sum += i;
            }
            for (ll i = 1; i < n - 2; i += 2)
            {
                cout << i << " ";
                sum2 += i;
            }
            cout << sum - sum2 << endl;

            // cout << endl;
        }
    }
}