

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
    string s;
    ll c = 1;
    while (s.size() < 100)
    {
        if (c % 3 == 0)
            s += "F";
        if (c % 5 == 0)
            s += "B";

        c++;
    }
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1;
        cin >> s1;
        if (s.find(s1) != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    {
        /* code */
    }
}
