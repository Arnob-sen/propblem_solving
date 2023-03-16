#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MAXN = 1e7 + 5;
#define endl '\n'
vector<bool> p(MAXN, false);
// vector<ll> dp;
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
        ll n, c = 0;
        cin >> n;
        string s1, s2;
        for (ll i = 0; i < 2 * n - 2; i++)
        {
            string s;
            cin >> s;
            if (s.size() == n - 1 && c == 0)
            {
                s1 = s;
                c = 1;
            }
            else if (s.size() == n - 1 && c == 1)
                s2 = s;
        }
        reverse(s1.begin(), s1.end());
        if (s1 == s2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}