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
        ll n;
    cin >> n;
    ll res = 1;
    ll a = 1378;

    while (n)
    {
        if (n % 2)
        {
            res = (res * a) % 10;
            n--;
        }
        else
        {
            a = (a * a) % 10;
            n /= 2;
        }
    }
    cout << res % 10 << endl;
}
