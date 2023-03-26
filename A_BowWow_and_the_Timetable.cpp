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

        string s;
    cin >> s;
    ll ans = s.size() / 2;
    ll ex = 0;
    if (s.size() % 2)
    {
        for (ll i = 1; i < s.size(); i++)
            if (s[i] == '1')
            {
                ex++;
                break;
            }
    }
    cout << ans + ex << endl;
}