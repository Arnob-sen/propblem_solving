#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    ll sum = 0;

    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
            sum += 1;
        if (s[i] == 'V')
            sum += 5;
        if (s[i] == 'X')
            sum += 10;
        if (s[i] == 'L')
            sum += 50;
        if (s[i] == 'C')
            sum += 100;
        if (s[i] == 'D')
            sum += 500;
        if (s[i] == 'M')
            sum += 1000;
    }
    cout << sum << endl;
}