#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << s[0] - '0' + (s[2] - '0') << endl;
    }
}