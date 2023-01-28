#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        string s;
        cin >> s;
        string s1 = "314159265358979323846264338327";
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == s1[i])
                ans++;
            else
                break;
        }
        cout << ans << endl;
    }
}