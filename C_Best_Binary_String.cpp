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
        string s;
        cin >> s;
        if (s[0] == '?')
            s[0] = '0';
        for (ll i = 1; i < s.size(); i++)
            if (s[i] == '?')
                s[i] = s[i - 1];

        cout << s << endl;
    }
}