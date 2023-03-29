#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()

{

    string s;
    cin >> s;
    ll i;
    if (s[0] == 'h')
    {
        cout << "http://";
        for (i = 4;; i++)
        {
            if (s[i] == 'r' && s[i + 1] == 'u' && i != 4)
                break;

            cout << s[i];
        }
        cout << ".ru";
        if (i + 2 == s.size())
            return 0;
        else
            cout << "/";

        for (ll j = i + 2; j < s.size(); j++)

            cout
                << s[j];
    }
    else
    {
        cout << "ftp://";
        for (i = 3;; i++)
        {
            if (s[i] == 'r' && s[i + 1] == 'u' && i != 3)
                break;

            cout << s[i];
        }
        cout << ".ru";
        if (i + 2 == s.size())
            return 0;
        cout << "/";

        for (ll j = i + 2; j < s.size(); j++)
            // if (s[j] == s[s.size() - 1])
            //     break;

            cout << s[j];
    }
}