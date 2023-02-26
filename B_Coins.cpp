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
    map<char, ll> mp;
    mp.insert({'A', 0});
    mp.insert({'B', 0});
    mp.insert({'C', 0});
    for (ll i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        if (s[1] == '>')
            mp[s[0]]++;
        else
            mp[s[2]]++;
    }
    if (mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1)
        cout << "Impossible\n";
    else
    {
        for (auto it : mp)

            if (it.second == 0)
                cout << it.first;

        for (auto it : mp)

            if (it.second == 1)
                cout << it.first;

        for (auto it : mp)

            if (it.second == 2)
                cout << it.first;
    }
}