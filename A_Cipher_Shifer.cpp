#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

// #define inf 1e12
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;

        cin >> n;
        string s;
        cin >> s;

        for (ll i = 0; i < n; i++)
        {
            cout << s[i];
            for (ll j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    i = j;
                    break;
                }
            }
        }
        cout << endl;
    }
}