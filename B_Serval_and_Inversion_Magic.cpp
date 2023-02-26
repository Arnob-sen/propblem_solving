
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
// vector<ll> dp;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
ll ans1 = 0, ans2 = 0;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    fastio
        ll t;

    cin >> t;
    while (t--)
    {
        ll n;
        ll c = 0, d = 0;
        vector<ll> v;
        cin >> n;

        string s, m;
        cin >> s;
        m = s;

        reverse(m.begin(), m.end());
        if (s == m)
        {
            cout << "Yes\n";
            continue;
        }

        ll i = 0, j = n - 1;

        while (i <= j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
                break;
        }

        while (i <= j)
        {
            if (s[i] != s[j])
            {
                s[j] = s[i];
                i++;
                j--;
            }
            else
                break;
        }
        m = s;
        //   cout << s << endl;
        reverse(m.begin(), m.end());
        // cout << m << endl;

        if (s == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
