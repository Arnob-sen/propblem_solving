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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 1;
        ll maxi = 1;
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {

                ans++;
                maxi = max(ans, maxi);
            }
            else
            {
                ans = 1;
            }
        }
        cout << maxi + 1 << endl;
    }
}