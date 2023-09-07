#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    char ok1 = 'a', ok2 = 'a';
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= ok1)
        {
            ans += '0';
            ok1 = s[i];
        }
        else if (s[i] >= ok2)
        {
            ans += '1';
            ok2 = s[i];
        }
        else
            c = 1;
    }
    if (c)
        cout << "NO\n";
    else
    {
        cout << "YES\n"
             << ans << endl;
    }
}