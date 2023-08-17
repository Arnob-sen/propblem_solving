#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c % 2)
        {
            a += (c / 2 + 1);
            b += c / 2;
        }
        else
        {
            a += (c / 2);
            b += (c / 2);
        }
        if (a > b)
            cout << "First\n";
        else
            cout << "Second\n";
    }
}