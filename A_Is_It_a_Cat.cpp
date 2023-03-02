
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
        ll n, c = 0;
        cin >> n;
        string m = "meow";
        string s;
        cin >> s;
        //  transform(str.begin(), str.end(), str.begin(), tolower);
        for (auto &c : s)
            c = tolower(c);

        // if (str.find(m))
        string x, y, z;
        char temp;
        if (s[0] != 'm' || s[n - 1] != 'w')
            cout << "NO\n";
        else
        {
            temp = s[0];
            x += temp;
            for (ll i = 1; i < n; i++)
            {
                if (s[i] != temp)
                {
                    temp = s[i];
                    x += temp;
                }
            }
            if (x == m)
                cout << "YES\n";
            //<< endl;
            else
                cout << "NO\n";
        }
    }
}