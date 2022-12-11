#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    set<char> s;
    for (ll i = 0; i < n; i++)
        s.insert(tolower(str[i]));
    if (s.size() == 26)
        cout << "YES\n";
    else
        cout << "NO\n";
}