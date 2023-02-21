#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000;
vector<bool> p(MAXN, true);
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
        ll n;
        cin >> n;
        p[1] = 0;
        // p[2]=1;

        for (ll i = 2; i * i <= n; i++)
        {
            if (p[i] == true)
            {
                for (ll j = i * i; j <= n; j += i)
                    p[j] = false;
            }
        }
        if (p[n] == true)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
