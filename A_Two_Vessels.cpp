#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ll ok;
        if ((abs(a - b)) % c == 0)
            ok = (abs(a - b) / c);
        else
            ok = ((abs(a - b)) / c) + 1;
        if (ok % 2 == 0)
            cout << ok / 2 << endl;
        else
            cout << ok / 2 + 1 << endl;
    }
}