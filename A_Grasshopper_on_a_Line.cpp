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
        ll t;
    cin >> t;
    while (t--)
    {
        ll n,
            k;
        cin >> n >> k;
        if (n % k == 0)
        {
            cout << "2\n";
            cout << k + 1 << " " << n - k - 1 << endl;
        }
        else
        {
            cout << "1\n";
            cout << n << endl;
        }
    }
}