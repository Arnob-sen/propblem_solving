#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    while (cin >> s)
    {
        ll c = 0;
        string d = "", m = "", ans;

        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                ans = d + ans;
                c = 1;
                d.clear();
                continue;
            }
            else if (s[i] == ']')
            {
                ans = d + ans;
                c = 0;
                d.clear();
                continue;
            }
            if (c == 0)
                ans += s[i];
            else
                d += s[i];
        }
        cout << d + ans << endl;
    }
}