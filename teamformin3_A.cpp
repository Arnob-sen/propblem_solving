#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    map<ll, char> m;
    m[0] = 'P';
    m[1] = 'E';
    m[2] = 'R';
    ll res = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != m[i % 3])
            res++;
    }
    cout << res << endl;
}
